class Bank:
    def __init__(self,name,balance):
        self.name = name 
        self.__balance = balance
    def get_balance(self):
        print(self.__balance)


abc = Bank("ABC",5000)
# abc.__balance = 0
# print(abc.__balance) 

abc.get_balance()

print(abc.__dict__.keys())