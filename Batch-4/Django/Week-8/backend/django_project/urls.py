"""
URL configuration for django_project project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""

from django.contrib import admin
from django.urls import path, include
from allauth.account.views import confirm_email

urlpatterns = [
    path("admin/", admin.site.urls),
    path("api/posts/", include("posts.urls")),
    path("api-auth/", include("rest_framework.urls")),
    path("api/auth/", include("dj_rest_auth.urls")),
    path("api/auth/registration/account-confirm-email/<str:key>/" , confirm_email, name="confirm_email"),
    path("api/auth/registration/",include("dj_rest_auth.registration.urls")),
    path("api/auth/", include("django.contrib.auth.urls")),
]

