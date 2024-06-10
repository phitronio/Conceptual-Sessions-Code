from django.urls import path
from accounts.views import customRegistrationView, loginView, CustomlogoutView
from django.contrib.auth.views import LoginView


urlpatterns = [
    # path('register/', registrationView, name="register"),
    path('register/', customRegistrationView.as_view(), name='register'),
    # path('login/', loginView, name='login'),
    path('login/', LoginView.as_view(template_name = 'accounts/login.html'), name='login'),
    # path('logout', logoutView, name='logout')
    path('logout/', CustomlogoutView.as_view(), name='logout')
]
