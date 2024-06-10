from django.urls import path
from meals.views import add_meal

urlpatterns = [
    path('add_meal/', add_meal.as_view(), name='add-meal')
]
