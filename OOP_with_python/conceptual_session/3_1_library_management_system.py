# 3-1
# Library Management System

class User:
    def __init__(self, name, roll, password) -> None:
        self.name = name
        self.roll = roll
        self.password = password
        self.borrowed_books = []
        self.returned_books = []


class Library:
    def __init__(self, book_list) -> None:
        self.book_list = book_list

    def borrow_book(self, book_name, user):
        for book in self.book_list:
            if book == book_name:  # check if , library has this book
                if book_name in user.borrowed_books:  # check if user already has this book
                    print(f"please return previous {book_name} book")
                    return
                # check if , library has at least one copy of this book
                if self.book_list[book] == 0:
                    print(f"{book_name} book quantity=0")
                    return
                self.book_list[book] -= 1
                user.borrowed_books.append(book_name)
                print(f"you have successfully borrowed {book_name} book")
                return

        print(f"{book_name} book not in this library")

    def return_books(self, book_name, user):
        for book in self.book_list:  # if book is from this library
            if book == book_name:
                if book in user.borrowed_books:
                    self.book_list[book] += 1  # add to library book list
                    # remove this book from user list
                    user.borrowed_books.remove(book_name)
                    user.returned_books.append(book_name)
                    print("book returned successfull")
                    return
                else:
                    print("you didn't borrow this book")
                    return                
        print("book is not from this library")

    def availability(self):
        for book in self.book_list:
            if self.book_list[book]>0: # print which books have at least one copy
                print(book)
            
    
    def donate_book(self, book_name, amount):
        for book in self.book_list:
            if book_name==book: # if this book in library, just increment
                self.book_list[book]+=amount
                print(f"thanks for donating {book_name} book, amount {amount}")
                return
        self.book_list[book_name]=amount # add a new book
        print(f"thanks for new book {book_name}, amount {amount}")

library = Library({"English": 1, "Bangla": 0, "Math": 1})

all_users = []
current_user = None

while True:
    if current_user == None:
        print("Not logged in, please login or creat account(L/C)")
        option = input()
        if option == "L":  # login with roll and password
            roll = int(input("Roll: "))
            password = input("password: ")
            match = False
            for user in all_users:
                if user.roll == roll and user.password == password:
                    current_user = user
                    match = True
            if match == False:  # no match found
                print("no such user found")

        else:  # creat new user
            name = input("Name: ")
            roll = int(input("Roll: "))
            password = input("password: ")
            user = User(name, roll, password)
            current_user = user
            all_users.append(user)
    else:
        # print("kaaj ses")
        print("options")
        print("-----------")
        print("1. Borrow a book")
        print("2. return a book")
        print("3. borowed book list")
        print("4. returned book list")
        print("5. check availabilty")
        print("6. donate")
        print("7. logout")
        print("20. show books with amount")

        x = int(input("input option: "))
        if x == 1:
            book_name = input("book name: ")
            library.borrow_book(book_name, current_user)

        elif x == 2:
            book_name = input("book_name: ")
            library.return_books(book_name, current_user)
        
        elif x==3:
            print(f"user borrwed books: {current_user.borrowed_books}")
        
        elif x==4:
            print(f"user returned books: {current_user.returned_books}")
        
        elif x==5:
            library.availability()

        elif x==6:
            book_name = input("book_name: ")
            amount=int(input("amount: "))
            library.donate_book(book_name, amount)

        elif x==7:
            current_user=None
        
        elif x==20:
            print(f"current library books: {library.book_list}")


        # library.borrow_book("Math",current_user)
        # library.borrow_book("English",current_user)
        # print(f"current library books: {library.book_list}")
        # print(f"user borrwed books: {user.borrowed_books}")
        
        # library.borrow_book("Bangla",current_user)
        # print(f"current library books: {library.book_list}")
        # print(f"user borrwed books: {user.borrowed_books}")
        
 

