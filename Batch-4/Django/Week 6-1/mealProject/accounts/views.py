from django.shortcuts import render, redirect
from django.contrib import messages
from accounts.forms import RegistrationForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import login, authenticate,logout
from django.contrib.auth.views import LogoutView
from django.urls import reverse_lazy
from django.views.generic import FormView
from django.http import HttpResponseRedirect




# Create your views here.

# def registrationView(request):
#     form = RegistrationForm()

#     if request.method == "POST":
#         form = RegistrationForm(request.POST)
#         if form.is_valid():
#             username = form.cleaned_data.get('username')
#             user = form.save()
#             login(request, user)
#             messages.success(request, f"{username} Account created successfully")
#             return redirect('meals')
#         else:
#             messages.warning(request, "Form data is not valid")

            

#     return render(request, 'accounts/register.html', {'form': form})


def loginView(request):
    form = AuthenticationForm()

    if request.method == "POST":
        username = request.POST['username']
        password = request.POST['password']

        user = authenticate(request, username=username, password=password)
        if user is None:
            messages.warning(request, 'username and password did not match')
            return render(request, 'accounts/login.html', {'form': form})

        messages.success(request, f'Welcome {request.user} log in successfull')
        login(request, user)
        return redirect('meals')
    return render(request, 'accounts/login.html', {'form': form})
    

# def logoutView(request):
#     messages.success(request, 'Logged out successfully')
#     logout(request)
#     return redirect('meals')

class CustomlogoutView(LogoutView):
    # next_page = reverse_lazy('add-meal')
    # next_page = 'https://google.com/'

    def get_success_url(self):
        return reverse_lazy('meals')
    
class customRegistrationView(FormView):
    template_name = 'accounts/register.html'
    form_class = RegistrationForm
    success_url = reverse_lazy('meals')

    # def get_success_url(self):
    #     return reverse_lazy('meals')

    def form_valid(self, form):
        username = form.cleaned_data.get('username')
        user = form.save()
        login(self.request, user)
        messages.success(self.request, f"{username} Account created successfully")
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.warning(self.request, "Form data is not valid")
        return super().form_invalid(form)

