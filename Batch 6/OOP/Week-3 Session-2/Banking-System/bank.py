from abc import ABC,abstractmethod

class Account(ABC):
    
    accounts=[]
    
    def __init__(self,name,accountNumber,password,type):
        self.name=name
        self.accountNumber=accountNumber
        self.password=password
        self.type=type
        self.balance=0
        
        Account.accounts.append(self)
        
    def changeInfo(self,name):
        self.name=name
    
    #overloads method in line 15
    def changeInfo(self,name,password):
        self.name=name
        self.password=password
        
    def deposit(self,amount):
        if amount>=0:
            self.balance+=amount
            print(f"Deposited amount : {amount}")
        else:
            print(f"negative amount cant be deposited")
            
    def withdraw(self,amount):
        if amount>=0 and amount<=self.balance:
            self.balance-=amount
            print(f"Withdrew amount : {amount}")
        else:
            print(f"error withdrawing amount : {amount}")
    
    @abstractmethod
    def showInfo():
        pass
            
            
class SavingsAccount(Account):
    
    def __init__(self,name,accountNumber,password,interestRate):
        super().__init__(name,accountNumber,password,"savings")
        
        self.interestRate=interestRate
        
    def apply_interest(self):
        interest=self.balance*(self.interestRate/100)
        self.deposit(interest)
        
    def showInfo():
        print("From Savings Account Class")

class SpecialAccount(Account):
    
    def __init__(self,name,accountNumber,password,limit):
        super().__init__(name,accountNumber,password,"special")
        
        self.limit=limit
        
    
    def withdraw(self, amount):
        if amount>=0 and amount<=self.limit:
            self.balance-=amount
            print(f"Withdrew amount : {amount}")
        else:
            print(f"error withdrawing amount : {amount}")
            
    
    def showInfo():
        print("From Special Account Class")
        


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
            
            
            op=int(input("Choose Option:"))
            
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