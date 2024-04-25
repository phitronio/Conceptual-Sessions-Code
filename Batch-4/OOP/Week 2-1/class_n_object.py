class Shop:
    def __init__(self, name):
        self.name = name
        self.products = []

    def __repr__(self):
        return f"This shop name is: {self.name}"
    
    def add_product(self, name, price):
        product = Product(name, price)
        self.products.append(product)
    
class Product:
    def __init__(self, name, price):
        self.name = name 
        self.price = price

    def __repr__(self) -> str:
        return self.name

shop1 = Shop("Test Shop")
shop1.add_product("Iphone", 500000)
shop1.add_product("Macbook", 100000)

shop2 = Shop("Test Shop 2")
shop2.add_product("Monitor", 20000)
shop2.add_product("Keyboard", 4000)

print(shop1.products)