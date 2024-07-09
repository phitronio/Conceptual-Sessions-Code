fetch("navbar.html")
  .then((res) => res.text())
  .then((data) => {
    document.getElementById("navbar").innerHTML = data;

    // Assign Auth Element

    const navElement = document.getElementById("nav-element");

    const token = localStorage.getItem("authToken");

    // console.log(token);

    if (token) {
      navElement.innerHTML += `
                  <li class="nav-item">
                    <a class="nav-link" href="./addPost.html">
                      Add Post
                    </a>
                  </li>;
                  <li class="nav-item">
                    <a class="nav-link" onclick="handleLogout()">
                      Logout
                    </a>
                  </li>;
                `;
    } else {
      navElement.innerHTML += `
                <li class="nav-item">
                  <a class="nav-link" href="./login.html">Login</a>
                </li>
                <li class="nav-item">
                  <a class="nav-link" href="./registration.html">Register</a>
                </li>
                `;
    }
  });
