
from django.contrib import admin
from django.urls import path, include
from meals.views import show_meals
from django.conf.urls.static import static
from django.conf import settings


urlpatterns = [
    path('admin/', admin.site.urls),
    path('', show_meals, name='meals'),
    path('meals/', include('meals.urls')),
    path('accounts/', include('accounts.urls'))
]

urlpatterns += static(settings.MEDIA_URL, document_root = settings.MEDIA_ROOT)
