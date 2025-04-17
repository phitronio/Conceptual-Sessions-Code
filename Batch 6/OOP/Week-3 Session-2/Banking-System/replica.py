# currentUser=None

# while(True):
#     if currentUser==None:
#         print("\n--> No user logged in !")
#         ch=input("\n--> Register/Login (R/L) : ")
#         if ch=="R":
#             name=input("Name:")
#             no=input("Account Number:")
#             pa=input("Password:")
#             a=input("Savings Account or special Account (sv/sp) :")
#             if a=="sv":
#                 ir=int(input("Interest rate:"))
#                 currentUser=SavingsAccount(name,no,pa,ir)
#             else:
#                 lm=int(input("Overdraft Limit:"))
#                 currentUser=SpecialAccount(name,no,pa,lm)
#         else:
#             no=int(input("Account Number:"))
#             for account in Account.accounts:
                
#                 if account.accountNo==no:
#                     currentUser=account
#                     break
                
#     else:
#         print(f"\nWelcome {currentUser.name} !\n")
        
#         if currentUser.type=="savings":
            
#             print("1. Withdraw")
#             print("2. Deposit")
#             print("3. Show Info")
#             print("4. change Info")
#             print("5. Apply Interset")
#             print("6. Logout\n")
            
#             op=int(input("Chhose Option:"))
            
#             if op==1:
#                 amount=int(input("Enter withdraw amount:"))
#                 currentUser.withdraw(amount)
                
#             elif op==2:
#                 amount=int(input("Enter deposit amount:"))
#                 currentUser.deposit(amount)
            
#             elif op==3:
#                 currentUser.showInfo()
            
#             elif op==4:
#                 print("Homework")
            
#             elif op==5:
#                 currentUser.apply_interest()
            
#             elif op==6:
#                 currentUser=None
#             else:
#                 print("Invalid Option")
        
#         else:
#             print("1. Withdraw")
#             print("2. Deposit")
#             print("3. Show Info")
#             print("4. change Info")
#             print("5. Logout\n")
            
            
#             op=int(input("Choose Option:"))
            
#             if op==1:
#                 amount=int(input("Enter withdraw amount:"))
#                 currentUser.withdraw(amount)
                
#             elif op==2:
#                 amount=int(input("Enter deposit amount:"))
#                 currentUser.deposit(amount)
            
#             elif op==3:
#                 currentUser.showInfo()
            
#             elif op==4:
#                 print("Homework")
            
#             elif op==5:
#                 currentUser=None
            
#             else:
#                 print("Invalid Option")