class Watch:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def display_time(self):
        print("Displaying time")

   

class FitnessTracker:
    def __init__(self, price):
        self.price = price

    def track_step(self):
        print("Tracking step")

    def track_calories(self):
        print("Tracking Calories")

class SmartWatch(Watch, FitnessTracker):
    def __init__(self, brand, model, price):
        Watch.__init__(self, brand, model)
        FitnessTracker.__init__(self, price)

    def display(self):
        print("Displaying")

apple = SmartWatch("Apple", "Ultra", 10000)
apple.display_time()
apple.track_step()
apple.display()

        
