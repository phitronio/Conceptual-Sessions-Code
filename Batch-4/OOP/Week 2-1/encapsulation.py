class Shop:
    def __init__(self, name):
        self.name = name
        self.products = []
        self.__balance = 500

    def __repr__(self):
        return f"This shop name is: {self.name}"
    
    def add_product(self, name, price):
        product = Product(name, price)
        self.products.append(product)

    def sell(self, product):
        self.balance += product.price

    def __tax_add(self):
        return self.__balance * 0.10
        
    def get_balance(self):
        return self.__balance - self.__tax_add()

    
    
class Product:
    def __init__(self, name, price):
        self.name = name 
        self.price = price

    def __repr__(self) -> str:
        return self.name

shop1 = Shop("Test Shop")
shop1.add_product("Iphone", 500000)
shop1.add_product("Macbook", 100000)

print(shop1.get_balance())

