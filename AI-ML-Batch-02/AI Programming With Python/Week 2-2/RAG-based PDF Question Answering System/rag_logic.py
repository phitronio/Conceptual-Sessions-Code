import io
import os
import re

import numpy as np
import requests
from PyPDF2 import PdfReader
from sentence_transformers import SentenceTransformer


def load_env_file():
    env_path = ".env"
    if not os.path.exists(env_path):
        return

    with open(env_path, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            if "=" not in line:
                continue
            key, value = line.split("=", 1)
            key = key.strip()
            value = value.strip().strip('"').strip("'")
            if key and os.environ.get(key) is None:
                os.environ[key] = value


load_env_file()


def get_embedding_model():
    """Load the sentence transformer model once."""
    return SentenceTransformer("all-MiniLM-L6-v2")



def read_pdf(file_bytes):
    """Turn PDF bytes into plain text."""
    pdf_stream = io.BytesIO(file_bytes)
    reader = PdfReader(pdf_stream)
    text = ""
    for page in reader.pages:
        page_text = page.extract_text()
        if page_text:
            text += page_text + " "

    cleaned = re.sub(r"\s+", " ", text).strip()
    return cleaned



def split_text(text, chunk_size=400, overlap=100):
    """Split text into smaller overlapping chunks."""
    words = text.split()
    chunks = []
    start = 0

    while start < len(words):
        end = start + chunk_size
        chunk = " ".join(words[start:end])
        chunks.append(chunk)
        if end >= len(words):
            break
        start = end - overlap

    return chunks



def embed_texts(texts):
    """Create normalized embeddings for a list of texts."""
    model = get_embedding_model()
    embeddings = model.encode(texts, convert_to_numpy=True, show_progress_bar=False)

    for i in range(len(embeddings)):
        norm = np.linalg.norm(embeddings[i])
        if norm > 0:
            embeddings[i] = embeddings[i] / norm

    return embeddings



def build_vector_store(uploaded_files, chunk_size=400, overlap=100):
    """Read PDFs, split text into chunks, and embed each chunk."""
    chunks = []
    sources = []

    for uploaded_file in uploaded_files:
        text = read_pdf(uploaded_file.read())
        file_name = uploaded_file.name
        file_chunks = split_text(text, chunk_size, overlap)

        for index, chunk in enumerate(file_chunks, start=1):
            chunks.append(chunk)
            sources.append(f"{file_name} chunk {index}")

    if not chunks:
        return {"chunks": [], "embeddings": [], "sources": []}

    embeddings = embed_texts(chunks)
    return {"chunks": chunks, "embeddings": embeddings, "sources": sources}




def find_similar_chunks(question, store, top_k=4):
    """Return the top matching chunks for a question."""
    
    if not store["chunks"]:
        return []

    question_embedding = embed_texts([question])[0]
    scores = store["embeddings"] @ question_embedding
    top_indexes = np.argsort(-scores)[:top_k]

    results = []
    for index in top_indexes:
        results.append(
            {
                "text": store["chunks"][index],
                "source": store["sources"][index],
                "score": float(scores[index]),
            }
        )

    return results



def format_context(retrieved):
    """Join retrieved chunks into a single prompt context."""
    if not retrieved:
        return ""

    lines = []
    for item in retrieved:
        lines.append(f"Source: {item['source']}\n{item['text']}")

    return "\n\n---\n\n".join(lines)



def build_prompt(context, question):
    """Create a Groq prompt from context and the user question."""
    prompt_text = (
        "You are an AI assistant that answers questions using ONLY the provided document context. "
        "Do not invent facts. If the answer is not in the context, say that it is not available.\n\n"
        "Context:\n"
        f"{context}\n\n"
        "Question:\n"
        f"{question}\n\n"
        "Answer using only the context above."
    )
    return prompt_text



def ask_groq(prompt_text):
    """Send the prompt to Groq Cloud and return the answer text."""
    api_key = os.environ.get("GROQ_API_KEY") or os.environ.get("GEMINI_API_KEY") or os.environ.get("GOOGLE_API_KEY")
    if not api_key:
        raise RuntimeError("Set GROQ_API_KEY or GEMINI_API_KEY or GOOGLE_API_KEY in the environment.")

    raw_base_url = os.environ.get("GROQ_BASE_URL", "https://api.groq.com")
    base_url = raw_base_url.rstrip("/")
    if base_url.endswith("/openai/v1"):
        endpoint = f"{base_url}/responses"
    else:
        endpoint = f"{base_url}/openai/v1/responses"

    model_name = os.environ.get("GROQ_MODEL", "openai/gpt-oss-20b")
    headers = {
        "Authorization": f"Bearer {api_key}",
        "Content-Type": "application/json",
    }
    payload = {
        "model": model_name,
        "input": prompt_text,
    }

    response = requests.post(endpoint, headers=headers, json=payload, timeout=30)
    response.raise_for_status()
    data = response.json()

    if isinstance(data, dict):
        if "output_text" in data:
            return data["output_text"].strip()
        if "output" in data and isinstance(data["output"], list):
            output_parts = []
            for item in data["output"]:
                if isinstance(item, dict) and "content" in item:
                    content = item["content"]
                    if isinstance(content, list):
                        for part in content:
                            if isinstance(part, dict) and part.get("type") == "output_text":
                                output_parts.append(part.get("text", ""))
                            elif isinstance(part, str):
                                output_parts.append(part)
                    elif isinstance(content, str):
                        output_parts.append(content)
            if output_parts:
                return "".join(output_parts).strip()

    return str(data).strip()
