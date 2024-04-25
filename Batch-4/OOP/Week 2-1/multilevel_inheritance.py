class Vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def spedd(self):
        pass

class Car(Vehicle):
    def __init__(self, brand, model, capacity):
        super().__init__(brand, model)
        self.capacity = capacity

class ElectricCar(Car):
    def __init__(self, brand, model, capacity, battery_capacity):
        super().__init__(brand, model, capacity)
        self.battery_capacity = battery_capacity


tesla = ElectricCar("Tesla", "X8", 7, 100000000)
print(tesla.battery_capacity)