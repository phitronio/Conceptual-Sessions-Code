from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.models import User


class RegistrationForm(UserCreationForm):
    def __init__(self, *args, **kwargs):
        super(UserCreationForm, self).__init__(*args, **kwargs)

        fields = ['first_name', 'last_name', 'username', 'email', 'password1', 'password2']

        for fieldName in fields:
            self.fields[fieldName].help_text = None
            self.fields[fieldName].widget.attrs.update({'class': 'form-control'})


    class Meta:
        model = User
        fields = ['first_name', 'last_name', 'username', 'email', 'password1', 'password2']