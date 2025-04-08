class Shop:

    def __init__(self, name):
        self.name = name
        self.products = []

    def add_product(self, name, price):
        product = Product(name, price)
        self.products.append(product)

    def sell(self):
        pass

    def __str__(self):
        return f"This is  a shop with name {self.name}"


class Product:
    def __init__(self, name, price):
        self.name = name
        self.price = price

    # def __str__(self):
    #     return self.name

    def __repr__(self):
        return self.name


shop1 = Shop("Test Shop 1")
shop1.add_product("Mobile", 40000)
shop1.add_product("Laptop", 100000)


shop2 = Shop("Test Shop 2")
shop2.add_product("Monitor", 20000)
shop2.add_product("Keyboard", 5000)

print(shop1.products)


""" 
Brac Bank [class atribute]
 - Dhaka Branch
 - Rajshahi Branch [instance attribute]
"""
