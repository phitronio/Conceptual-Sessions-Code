from django.shortcuts import render, redirect
from django.contrib import messages
from accounts.forms import RegistrationForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import login, authenticate,logout


# Create your views here.

def registrationView(request):
    form = RegistrationForm()

    if request.method == "POST":
        form = RegistrationForm(request.POST)
        if form.is_valid():
            username = form.cleaned_data.get('username')
            user = form.save()
            login(request, user)
            messages.success(request, f"{username} Account created successfully")
            return redirect('meals')
        else:
            messages.warning(request, "Form data is not valid")

            

    return render(request, 'accounts/register.html', {'form': form})


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
    

def logoutView(request):
    messages.success(request, 'Logged out successfully')
    logout(request)
    return redirect('meals')