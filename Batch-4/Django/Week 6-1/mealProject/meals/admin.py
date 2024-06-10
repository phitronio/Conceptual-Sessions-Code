from django.contrib import admin
from meals.models import Category, Food

# Register your models here.

admin.site.register(Category)
admin.site.register(Food)