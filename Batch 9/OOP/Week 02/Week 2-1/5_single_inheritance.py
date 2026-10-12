class Animal:
    def __init__(self,name):
        self.name = name 
    def eat(self):
        print(f"{self.name} can eat")


class Cat(Animal):
    def __init__(self,name):
        # self.name = name  # type 1
        super().__init__(name) # type 2
        # Animal.__init__(self,name) # type  3

    def sound(self):
        print("Meow")

class Dog(Animal):
    def sound(self):
        print("Bark")

cat = Cat("Kitty")
cat.eat()