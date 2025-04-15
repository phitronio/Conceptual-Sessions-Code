""""sumary_line
FoodItem (name, price)
Burger (FoodItem)
Pizza (FoodItem)
Drink (FoodItem)
"""
from abc import ABC, abstractmethod


class Restaurent_Owner:
    order_list = []  # class attribute

    def add_order(self, order):
        self.order_list.append(order)


class Customer:
    def __init__(self, name):
        self.name = name


owner = Restaurent_Owner()


class FoodItem(ABC):
    def __init__(self, name, price):
        self.__name = name
        self.__price = price

    def get_price(self):
        return self.__price

    def get_name(self):
        return self.__name

    @abstractmethod
    def prepare(self):
        pass


class Burger(FoodItem):
    def __init__(self):
        super().__init__("Burger", 150)

    def prepare(self):
        print("Grilling the burger patty and adding sauce...")

    def __repr__(self):
        return self.get_name()


class Pizza(FoodItem):
    def __init__(self):
        super().__init__("Pizza", 300)

    def prepare(self):
        print("Baking the pizza with cheese and toppings...")

    def __repr__(self):
        return self.get_name()


class Drink(FoodItem):
    def __init__(self):
        super().__init__("Drink", 50)

    def prepare(self):
        print("Pouring the drink into the cup...")

    def __repr__(self):
        return self.get_name()


class Order:
    def __init__(self):
        self.items = []
        owner.add_order(self)

    def add_item(self, food_item):
        self.items.append(food_item)

    def process_order(self):
        print("\n Preparing you items:")
        for item in self.items:
            item.prepare()

    def show_order(self):
        print("\n Your Order Summary")
        total = 0
        for item in self.items:
            print(f"- {item} - {item.get_price()}")  # Polymorphism
            total += item.get_price()
        print(f"Total price: {total} BDT")

    def __repr__(self):
        items_name = ""
        for item in self.items:
            items_name += f" {item.get_name()}, "
        return f"[{items_name}]"


while True:
    burger = Burger()
    pizza = Pizza()
    drink = Drink()

    print("Choose an Option\n"
          "1. Owner\n"
          "2. Customer\n")
    option = int(input("Your selection: "))

    if option == 1:
        """Owner"""

        while True:
            print("Select an option\n"
                  "1. Process Order\n"
                  "2. Show Order\n"
                  "3. Exit")

            owner_selection = int(input("Your selection: "))

            # Practice Task
            """ Order list iterate process order, show_order"""

            # Practice task solution

            if owner_selection == 1:
                print("\n🍽️ Processing All Orders...")
                for i in range(len(owner.order_list)):
                    print(f"\nOrder {i + 1}:")
                    owner.order_list[i].process_order()

            elif owner_selection == 2:
                print("\n📋 Showing All Orders:")
                for i in range(len(owner.order_list)):
                    print(f"\nOrder {i + 1}:")
                    owner.order_list[i].show_order()
            elif owner_selection == 3:
                break
            else:
                print("Wrong input. Try again!")

    elif option == 2:
        """Customer"""

        name = input("Enter your name: ")
        customer = Customer(name)
        order = Order()
        item_list = [burger, pizza, drink]

        while True:
            print("Select an option\n"
                  "1. Show Menu\n"
                  "2. Add Item\n"
                  "3. Exit"
                  )

            customer_selection = int(input("Your selection: "))
            if customer_selection == 1:
                for i in range(len(item_list)):
                    print(f"{i} {item_list[i]}")

            elif customer_selection == 2:
                order_input = int(input("Enter item code: "))
                order.add_item(item_list[order_input])
            elif customer_selection == 3:
                break
            else:
                print("Wrong input.Try Again!!")
