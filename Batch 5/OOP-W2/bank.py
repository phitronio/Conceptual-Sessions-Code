
from abc import ABC,abstractmethod

class Account(ABC):
    accounts=[]
    
    def __init__(self,name,accNo,password,type):
        self.name=name
        self.accNum=accNo
        self.passW=password
        self.balance=0
        self.type=type
        

        Account.accounts.append(self)
        
    def changeInfo(self,newName):
        self.name=newName
        print(f"Name change to {newName}")

    #overloads the method changeInfo
    def changeInfo(self,newName,newpass):
        self.name=newName
        self.passW=newpass
        print(f"Name change to {newName}, {newpass}")
        
    def deposit(self,amount):
        if amount>0:
            self.balance+=amount
    
    def withdraw(self,amount):
        if amount>0 and self.balance>=amount:
            self.balance-=amount
    
    @abstractmethod
    def showInfo(self):
        pass
    
    
class SavingsAccount(Account):
    
    def __init__(self,name,accNo,password,irate):
        super().__init__(name,accNo,password,"savings")
        self.irate=irate

    def showInfo(self):
        print(f'Account Name : {self.name}')
        print(f'Account Type : {self.type}')


class SpecialAccount(Account):
    
    def __init__(self,name,accNo,password,limit):
        super().__init__(name,accNo,password,"special")
        self.limit=limit

    def showInfo(self):
        print(f'Account Name : {self.name}')
        print(f'Account Type : {self.type}')
        
    
    def withdraw(self, amount,name):
        if amount>0 and self.limit>=amount:
            self.balance-=amount






myacc=Account("ratin",1234,1234,"savings")

myacc.changeInfo("tazul",234)

myacc.deposit(500)