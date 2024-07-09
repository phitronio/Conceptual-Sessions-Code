from dj_rest_auth.registration.serializers import RegisterSerializer
from rest_framework import serializers
from django.contrib.auth import get_user_model

User = get_user_model()

# must add this in settings.py

# REST_AUTH_REGISTER_SERIALIZERS = {
#     'REGISTER_SERIALIZER': 'accounts.serializers.CustomRegisterSerializer',
# }


class CustomRegisterSerializer(RegisterSerializer):
    USER_TYPE_CHOICES = (
        ('admin', 'Admin'),
        ('editor', 'Editor'),
        ('viewer', 'Viewer'),
    )
    user_type = serializers.ChoiceField(choices=USER_TYPE_CHOICES)

    def get_cleaned_data(self):
        data = super().get_cleaned_data()
        data['user_type'] = self.validated_data.get('user_type', '')
        print('heloooooooo --- > ',data['user_type'])
        return data

    def save(self, request):
        user = super().save(request)
        user.user_type = self.cleaned_data.get('user_type')
        user.save()
        return user
