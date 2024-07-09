const addPost = (event) => {
  event.preventDefault();

  const form = document.getElementById("add-post");
  const formData = new FormData(form);
  const token = localStorage.getItem("authToken");
  console.log(token);
  const postData = {
    title: formData.get("title"),
    body: formData.get("body"),
  };

  //   console.log(postData);

  fetch("http://127.0.0.1:8000/api/posts/", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
      Authorization: `Token ${token}`,
    },
    body: JSON.stringify(postData),
  })
    .then((res) => res.json())
    .then((data) => {
      //   alert("Post Added Successfully");
      window.location.href = "./index.html";
    });
};

const getAllPost = () => {
  fetch("http://127.0.0.1:8000/api/posts/")
    .then((res) => res.json())
    .then((posts) => {
      console.log(posts);
      const allPost = document.getElementById("all-post");

      posts.forEach((post) => {
        const div = document.createElement("div");
        div.classList.add("col-sm-6");

        div.innerHTML = `
                      <div class="card">
                        <div class="card-body">
                            <h5 class="card-title">${post.title}</h5>
                            <p class="card-text">
                                ${post.body}
                            </p>
                            <a href="./post_detail.html?id=${post.id}" class="btn btn-primary">Details</a>
                        </div>
                        </div>
                    `;
        allPost.appendChild(div);
      });
    });
};
