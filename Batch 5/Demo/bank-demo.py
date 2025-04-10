
from abc import ABC, abstractmethod

class Account(ABC):
    accounts=[]
    def __init__(self,name,accountNumber,password,type):
        self.name=name
        self.accountNo = accountNumber
        self.passW=password
        self.balance = 0
        self.type=type
        Account.accounts.append(self)

    
    def changeInfo(self,name):
        self.name=name
        print(f"\n--> Name is changed of {self.accounNo}")
    
    #Overloading of method changeInfo
    def changeInfo(self,name,passW):
        self.name=name
        self.passW=passW
        print(f"\n--> Name and Password are changed of {self.accounNo}")
    
    def deposit(self, amount):
        if amount >= 0:
            self.balance += amount
            print(f"\n--> Deposited {amount}. New balance: ${self.balance}")
        else:
            print("\n--> Invalid deposit amount")

    def withdraw(self, amount):
        if amount >= 0 and amount <= self.balance:
            self.balance -= amount
            print(f"\nWithdrew ${amount}. New balance: ${self.balance}")
        else:
            print("\nInvalid withdrawal amount")

    @abstractmethod
    def showInfo(self):
        pass


class SavingsAccount(Account):
    def __init__(self,name,accountNumber,password,interestRate):
        super().__init__(name,accountNumber,password,"savings")
        self.interestRate = interestRate

    def apply_interest(self):
        interest = self.balance*(self.interestRate/100)
        #msg
        print("\n--> Interest is applied !")
        self.deposit(interest)
    
    def showInfo(self):
        print(f"Infos of {self.type} account of {self.name}:\n")
        print(f'\n\tAccount Type : {self.type}')
        print(f'\tName : {self.name}')
        print(f'\tAccount No : {self.accountNo}')
        print(f'\tCurrent Balance : {self.balance}\n')


class SpecialAccount(Account):
    def __init__(self,name,accountNumber,password,limit):
        super().__init__(name,accountNumber,password,"special")
        self.limit=limit

    def withdraw(self, amount):
        if amount > 0 and (self.balance - amount) >= -self.limit:
            self.balance -= amount
            print(f"\n--> Withdrew ${amount}. New balance: ${self.balance}")
        else:
            print("\n--> Invalid withdrawal amount or overdraft limit reached")
            
    def showInfo(self):
        print(f"Infos of {self.type} account of {self.name}:\n")
        print(f'\n\tAccount Type : {self.type}')
        print(f'\tName : {self.name}')
        print(f'\tAccount No : {self.accountNo}')
        print(f'\tCurrent Balance : {self.balance}\n')


# Main program

currentUser=None

while(True):
    if currentUser==None:
        print("\n--> No user logged in !")
        ch=input("\n--> Register/Login (R/L) : ")
        if ch=="R":
            name=input("Name:")
            no=input("Account Number:")
            pa=input("Password:")
            a=input("Savings Account or special Account (sv/sp) :")
            if a=="sv":
                ir=int(input("Interest rate:"))
                currentUser=SavingsAccount(name,no,pa,ir)
            else:
                lm=int(input("Overdraft Limit:"))
                currentUser=SpecialAccount(name,no,pa,lm)
        else:
            no=int(input("Account Number:"))
            for account in Account.accounts:
                
                if account.accountNo==no:
                    currentUser=account
                    break
                
    else:
        print(f"\nWelcome {currentUser.name} !\n")
        
        if currentUser.type=="savings":
            
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Apply Interset")
            print("6. Logout\n")
            
            op=int(input("Chhose Option:"))
            
            if op==1:
                amount=int(input("Enter withdraw amount:"))
                currentUser.withdraw(amount)
                
            elif op==2:
                amount=int(input("Enter deposit amount:"))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()
            
            elif op==4:
                print("Homework")
            
            elif op==5:
                currentUser.apply_interest()
            
            elif op==6:
                currentUser=None
            else:
                print("Invalid Option")
        
        else:
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Logout\n")
            
            
            op=int(input("Chhose Option:"))
            
            if op==1:
                amount=int(input("Enter withdraw amount:"))
                currentUser.withdraw(amount)
                
            elif op==2:
                amount=int(input("Enter deposit amount:"))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()
            
            elif op==4:
                print("Homework")
            
            elif op==5:
                currentUser=None
            
            else:
                print("Invalid Option")