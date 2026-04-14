class Phone:
    def __init__(self):
        print("I am Constructor")
    def display(self):
        print(self)
        print("I am method")


def outside_func():
    print("I am outside function")

Phone.outside_func = outside_func

p = Phone()
p.display()
# print(p)

print(Phone.__dict__.keys())