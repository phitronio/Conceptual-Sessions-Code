from django.urls import path
from accounts.views import registrationView, loginView, logoutView

urlpatterns = [
    path('register/', registrationView, name="register"),
    path('login/', loginView, name='login'),
    path('logout', logoutView, name='logout')
]
