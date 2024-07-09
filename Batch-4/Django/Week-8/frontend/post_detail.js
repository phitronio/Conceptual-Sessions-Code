const getQueryParams = (param) => {
  const urlParams = new URLSearchParams(window.location.search);
  return urlParams.get(param);
};

const getPostDetail = () => {
  const postId = getQueryParams("id");
  fetch(`http://127.0.0.1:8000/api/posts/${postId}/`)
    .then((res) => res.json())
    .then((post) => {
      console.log(post);
      document.getElementById("post-title").innerText = post.title;
      document.getElementById("post-body").innerText = post.body;

      // Set data into modal
      document.getElementById("title").value = post.title;
      document.getElementById("body").value = post.body;
    });
};

const updatePost = (event) => {
  event.preventDefault();

  const postId = getQueryParams("id");
  const form = document.getElementById("update-post");
  const formData = new FormData(form);
  const token = localStorage.getItem("authToken");

  const updatPostData = {
    title: formData.get("title"),
    body: formData.get("body"),
  };

  fetch(`http://127.0.0.1:8000/api/posts/${postId}/`, {
    method: "PUT",
    headers: {
      "Content-Type": "application/json",
      Authorization: `Token ${token}`,
    },
    body: JSON.stringify(updatPostData),
  })
    .then((res) => res.json())
    .then((data) => {
      console.log(data);
      //   alert("Post updated successfully");
      $("#editModal").modal("hide");
    });
};

const deletePost = () => {
  const token = localStorage.getItem("authToken");
  const postId = getQueryParams("id");
  fetch(`http://127.0.0.1:8000/api/posts/${postId}/`, {
    method: "DELETE",
    headers: {
      "Content-Type": "application/json",
      Authorization: `Token ${token}`,
    },
  })
    .then((res) => (window.location.href = "./index.html"))
    .catch((err) => console.log(err));
};

document.getElementById("delete-btn").addEventListener("click", deletePost);

getPostDetail();
