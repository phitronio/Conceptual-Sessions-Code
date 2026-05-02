import random

class Bank:
    account_list = []
    loanFacility = True
    isBankRupt = False
    
    def __init__(self,name) -> None:
        self.name = name
        self.total_balance = 0
        self.total_loan = 0
        
    def create_account(self,name,email,phone,password):
        user = Account(name,email,phone,password,"user")
        self.account_list.append(user)
        
    def delete_account(self,account_no):
        for person in self.account_list:
            if person.account == account_no:
                self.account_list.remove(person)
                print(person.name,"deleted succesfully!")
    
    def show_users(self):
        for user in self.account_list:
            print(f"Name : {user.name} Account No. : {user.account}")
            
    def show_total_balance(self):
        print("Total balance of",self.name," =",self.total_balance)
        
    def show_total_loan(self):
        print("Total balance of",self.name," =",self.total_loan)
        
    def loan_on(self):
        self.loanFacility = True
        
    def loan_off(self):
        self.loanFacility = False
    
    def declare_bankrupt(self):
        self.isBankRupt = True 
    
class Account:

    def __init__(self,name,email,phone,password,type) -> None:
        self.name = name
        self.email = email
        self.phone = phone
        self.password = password
        self.user_type = type
        self.account = self.generate_Account_No()
        self.total_balance = 0
        self.transaction_history = []
        self.loan_count = 0
        
    def generate_Account_No(self):
        account_no = random.randint(10001,19999)
        return account_no

    def deposit(self,bank,amount):
        self.total_balance += amount
        bank.total_balance += amount
        print("\nSuccessfully Deposited",amount,". Your current balance is",self.total_balance)
        self.transaction_history.append(f"Deposited {amount} tk.")
        
    def withdraw(self,bank,amount):
        if(bank.isBankRupt):
            print("Sorry, This bank is bankrupt.")
        else:
            if(self.total_balance>amount):
                self.total_balance -= amount
                bank.total_balance -= amount
                print("\nHere is your money",amount,"tk. Your current balance is",self.total_balance)
                self.transaction_history.append(f"withdrawed {amount} tk.")
            else:
                print("Withdrawal amount exceeded")
                
    def show_balance(self):
        print("\nYour current balance is", self.total_balance)
        
    def show_transaction_history(self):
        print("\n\t---Transaction History---")
        for history in self.transaction_history:
            print(history)
            
    def take_loan(self,bank,amount):
        if(bank.loanFacility):
            if(bank.total_balance > amount):
                if(self.loan_count < 2):
                    self.total_balance += amount
                    bank.total_balance -= amount
                    bank.total_loan += amount
                    self.loan_count += 1
                    print("\nCongrats! You have taken a loan of",amount,"tk. Your current balance is",self.total_balance,"tk.")
                    self.transaction_history.append(f"Taken loan of {amount} tk.")
                else:
                    print("\nSorry, You can't take loan more than twice.")
            else:
                print("Sorry. The bank doesn't have enough money to provide loan.")    
        else:
            print("Taking loan is currenty off by admin.")
            

print("\n\t---Welcome to Standard Bank---\n")
bank = Bank("Standard Bank")

def logged_in_as_user():
    print("Welcome",user.name,"to Standard Bank. Your account No. is",user.account)
    while(True):
        print(" __________________________________ ")
        print("| Press 1 for Check Balance.       |")
        print("| Press 2 for Deposit Money.       |")
        print("| Press 3 for Withdraw Money.      |")
        print("| Press 4 for Take loan.           |")
        print("| Press 5 for Transaction History. |")
        print("| Press 6 for logout               |")
        print("|__________________________________|")

        choice = int(input("Enter your choice : "))
        if choice == 1:
            user.show_balance()
                    
        elif choice == 2:
            amount = int(input("Enter the amount you want to deposit : "))
            user.deposit(bank,amount)
                    
        elif choice == 3:
            amount = int(input("Enter the amount you want to withdraw : "))
            user.withdraw(bank,amount)
                    
        elif choice == 4:
            amount = int(input("Enter the amount you want to take loan : "))
            user.take_loan(bank,amount)
                    
        elif choice == 5:
            user.show_transaction_history()
                
        elif choice == 6:
            print("Logging out...")
            break
                    
        else:
            print("Invalid Choice.")
    
def logged_in_as_admin():
            print("Welcome",user.name,"to Standard Bank. Your Administrative account No. is",user.account)
            while(True):
                print(" _____________________________________________ ")
                print("| Press 1 for Create an user account.         |")
                print("| Press 2 for Delete an user account.         |")
                print("| Press 3 for Show all users.                 |")
                print("| Press 4 for Show total balance of the bank. |")
                print("| Press 5 for Show total loan amount.         |")
                print("| Press 6 for Turn on loan                    |")
                print("| Press 7 for Turn off loan                   |")
                print("| Press 8 for Declare Bankrupt                |")
                print("| Press 9 for Logout                          |")
                print("|_____________________________________________|")

                choice = int(input("Enter your choice : "))
                if choice == 1:
                    name = input("Enter name : ")
                    email = input("Enter email : ")
                    phone = input("Enter phone No : ")
                    password = input("Password : ")
                    bank.create_account(name,email,phone,password)
                    
                elif choice == 2:
                    acnt = int(input("Enter the account you want to delete : "))
                    bank.delete_account(acnt)
                    
                elif choice == 3:
                    bank.show_users()
                    
                elif choice == 4:
                    bank.show_total_balance()
                    
                elif choice == 5:
                    bank.show_total_loan()
                
                elif choice == 6:
                    bank.loan_on()
                    
                elif choice == 7:
                    bank.loan_off()
                
                elif choice == 8:
                    bank.declare_bankrupt()
                
                elif choice == 9:
                    print("Logging out...")
                    return

                else:
                    print("Invalid choice.")
        

while(True):
    op = input("Register/Login (r/l) : ")
    if op == 'r':
        user_type = input("User/Admin (u/a) : ")
        name = input("Enter your name : ")
        email = input("Enter your email : ")
        phone = input("Enter your phone No : ")
        password = input("Password : ")
        
        if user_type == 'u':
            user = Account(name,email,phone,password,"user")
            print("Welcome",name,"to Standard Bank. Your account No. is",user.account)
            bank.account_list.append(user)

        else:
            user = Account(name,email,phone,password,"admin")
            print("Welcome",name,"to Standard Bank. Your Administrative account No. is",user.account)
            bank.account_list.append(user)

    elif op == 'l':
        user_type = input("User/Admin (u/a) : ")
        name = input("Enter your name : ")
        password = input("Password : ")
        
        for user in bank.account_list:
            if user.name == name:
                if user.password == password:
                    if user_type == 'a':
                        logged_in_as_admin()
                    else:
                        logged_in_as_user()
                else:
                    print("Sorry, Password didn't match. Try again.")
            else:
                print("Sorry, Name didn't match. Try again")