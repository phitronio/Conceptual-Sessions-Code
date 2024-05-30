from django.forms import ModelForm, Textarea
from meals.models import Food

class MealAddForm(ModelForm):
    def __init__(self, *args, **kwargs):
        super(ModelForm, self).__init__(*args, **kwargs)
        # self.fields['food_name'].widget.attrs.update({'class': 'form-control'})\
        for field_name in self.fields:
            self.fields[field_name].widget.attrs.update({'class': 'form-control'})
    
    class Meta:
        model = Food
        fields = '__all__'

        labels = {
            'category': 'Food Category'
        }

        widgets = {
            'food_description': Textarea(attrs={'rows': 4})
        }

        