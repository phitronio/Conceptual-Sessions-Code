const handleRegistration = (event) => {
  event.preventDefault();
  const form = document.getElementById("registration-form");
  const formData = new FormData(form);
  //   console.log(formData);

  const registrationData = {
    username: formData.get("username"),
    email: formData.get("email"),
    password1: formData.get("password1"),
    password2: formData.get("password2"),
  };

  console.log("registration data", registrationData);

  fetch("http://127.0.0.1:8000/api/auth/registration/", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify(registrationData),
  }).then((res) => {
    alert(
      "Registration Successfull. Please check email for confirmation email"
    );
    window.location.href = "login.html";
  });
  // .then((data) => console.log(data));
};

const handleLogin = (event) => {
  event.preventDefault();
  const form = document.getElementById("login-form");
  const formData = new FormData(form);
  //   console.log(formData);

  const registrationData = {
    username: formData.get("username"),
    password: formData.get("password"),
  };

  fetch("http://127.0.0.1:8000/api/auth/login/", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify(registrationData),
  })
    .then((res) => res.json())
    .then((data) => {
      console.log(data);
      localStorage.setItem("authToken", data.key);
      // window.location.href = "./index.html";
    })
    .catch((err) => console.log("Login error", err));
};

const handleLogout = () => {
  const token = localStorage.getItem("authToken");

  fetch("http://127.0.0.1:8000/api/auth/logout/", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
      Authorization: `Token ${token}`,
    },
  })
    .then((res) => {
      console.log(res);
      if (res.ok) {
        localStorage.removeItem("authToken");
        window.location.href = "./index.html";
      }
    })
    .catch((err) => console.log("Logout Error", err));
};
