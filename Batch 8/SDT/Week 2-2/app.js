const postList = document.getElementById("postList")
const toggleSaveBtn  = document.getElementById("toggleSaved") 

let allPost = [];
let likedPosts = new Set();
let savedPosts = new Set(JSON.parse(localStorage.getItem("savedPosts")) || []);
let showingSavedPost = false;
// Fetch posts from jsonplaceholder
async function fetchPosts() {
    const postRes = await fetch("https://jsonplaceholder.typicode.com/posts?_limit=10")
    const posts = await postRes.json();

    const postWithImage = posts.map( p => ({
        ...p,
        image: `https://picsum.photos/seed/${p.id}/200/300`
    }))
    allPost = postWithImage
    renderPosts(postWithImage)
}

// Render posts
function renderPosts(posts) {
    postList.innerHTML="";


    // rendered posts
    posts.forEach( post => {
        const isLiked = likedPosts.has(post.id);
        const isSaved = savedPosts.has(post.id);

        const col = document.createElement("div");
        col.className = "col-md-6 col-lg-4";
        col.innerHTML=`
            <div class="card shadow-sm h-100">
            <img src="${post.image}" class="card-img" alt="Post image">
            <div class="card-body">
                <h4>${post.title}</h4>
                <p>${post.body}</p>
                <div class="d-flex justify-content-between">
                    <button class="btn btn-like ${isLiked ? 'btn-dark'  :''}" data-id="${post.id}">❤️ Like</button>
                    <button class="btn btn-save ${isSaved ? 'btn-success' : ''} " data-id="${post.id}">📌 Save</button>
                </div>
            </div>
            </div>
        ` 

        postList.appendChild(col);
    })

    // Add event listeners for like
    document.querySelectorAll(".btn-like").forEach(btn => {
        btn.addEventListener('click', ()=>{
            const id = parseInt(btn.dataset.id);
            if(likedPosts.has(id)){
                likedPosts.delete(id);
            } else {
                likedPosts.add(id);
            }
            console.log(likedPosts);
            renderPosts(allPost);
        })
    })

    // Add event listeners for save
    document.querySelectorAll(".btn-save").forEach(btn => {
        btn.addEventListener('click', ()=>{
            const id = parseInt(btn.dataset.id);
            if(savedPosts.has(id)){
                savedPosts.delete(id);
            } else {
                savedPosts.add(id);
            }
            localStorage.setItem("savedPosts", JSON.stringify(Array.from(savedPosts)))
            console.log(savedPosts);
            renderPosts(allPost);
        })
    })

}

// Filter all saved post return array
function getSavePosts(){
    return allPost.filter(post => savedPosts.has(post.id))
}

toggleSaveBtn.addEventListener('click', () => {
    showingSavedPost = !showingSavedPost;
    toggleSaveBtn.textContent = showingSavedPost ? "View All Posts" : "View Saved Posts"
    renderPosts(showingSavedPost ? getSavePosts(): allPost)
})

fetchPosts();