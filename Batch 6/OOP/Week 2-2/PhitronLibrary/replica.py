


# currentUser=admin
# changeOfUser=True

# while True:
#     if currentUser==None:
#         print("\n\t--->!!! No logged in user\n")
        
#         option=input("Login or Register (L/R) :")
        
#         if option =="L":
#             id=int(input("Enter Id:"))
#             password=input("Enter Password:")
            
#             match=False
#             for user in bsk.users:
#                 if user.id==id and user.password==password:
#                     currentUser=user
#                     changeOfUser=True
#                     match=True
#                     break
#             if match==False:
#                 print("\n\t---> No user Found !\n")
                
#         elif option == "R":
#              id=int(input("\tEnter Id:"))
#              name=input("\tEnter name:")
#              password=input("\tEnter Password:")
             
#              for user in bsk.users:
#                 if user.id==id:
#                     print("\n\t---> User already exists!\n")
            
#              user=bsk.addUser(id,name,password)
#              currentUser=user
#              changeOfUser=True
    
#     else:
#         if changeOfUser:
#             print("\n------------------------------------")
#             print(f"\tWelcome Back {currentUser.name} !")
#             print("------------------------------------")
#             changeOfUser=False
#         else:
#             print("\n\t<---------------------------->")
        
#         if currentUser.name=="admin":
                        
#             print("Options:\n")
#             print("1: Add book")
#             print("2: Show users")
#             print("3: Show all books")
#             print("4: Logout")
             
             
#             ch=int(input("\nEnter Option:"))
             
#             if ch==1:
#                 id=int(input("\tEnter book id:"))
#                 name=input("\tEnter book name:")
#                 quan=int(input("\tEnter No of books:"))
                 
#                 bsk.addBook(id,name,quan)
                 
#             elif ch==2:
#                 print("\n\tUsers:\n")
#                 print(f'\tName\tReading Now\tAlready Read')
                  
#                 for user in bsk.users:
#                     if user.name!="admin":
#                         print(f'\t{user.name}\t\t{len(user.borrowedBooks)}\t\t{len(user.returnedBooks)}')
                  
            
#             elif ch==3:
                 
#                 print("\n\tBook List:\n")
                 
#                 for book in bsk.books:
#                     print(f'\t{book.id}\t{book.name}\t{book.quantity}')
             
#             elif ch==4:
#                 currentUser=None
             
#             else:
#                 print("\n\t---> !!! Choose Valid Option\n")
                  
        
#         else:
#             print("Options:\n")
#             print("1: Borrow Book")
#             print("2: Return Book")
#             print("3: Show All Books")
#             print("4: Show Borrowed books")
#             print("5: Show History")
#             print("6: Logout")
            
#             ch=int(input("\nEnter Option:"))
            
#             if ch==1:
#                 id=int(input("\tEnter book id:"))
#                 bsk.borrowBook(currentUser,id)
#             elif ch==2:
#                 id=int(input("\tEnter book id:"))
#                 bsk.returnBook(currentUser,id)
                
#             elif ch==3:
#                 print("\n\tAll Books:\n")
#                 for book in bsk.books:
#                     if book in currentUser.borrowedBooks:
#                         print(f'\t{book.id}\t{book.name}\t{book.quantity}\tReading Now..')
#                     elif book in currentUser.returnedBooks:
#                         print(f'\t{book.id}\t{book.name}\t{book.quantity}\tAlready Read')
#                     else:
#                         print(f'\t{book.id}\t{book.name}\t{book.quantity}\tDid not Read')
                     
                
#             elif ch==4:
#                 print("\n\tBorrowed Books:\n")
#                 for book in currentUser.borrowedBooks:
#                      print(f'\t{book.id}\t{book.name}\t{book.quantity}')
                
#             elif ch==5:
#                 print("\n\tHistory:\n")
#                 for book in currentUser.returnedBooks:
#                      print(f'\t{book.id}\t{book.name}\t{book.quantity}')
                
#             elif ch==6:
#                 currentUser=None
                
#             else:
#                 print("\n\t---> !!! Choose Valid Option\n")
                    
                    
                    
                    
                    
                    
                    
                    