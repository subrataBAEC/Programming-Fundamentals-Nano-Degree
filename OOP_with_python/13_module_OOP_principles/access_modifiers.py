# module 13-5
# Access modifiers-public, protected, private
# encapsulation-private, protected attribute

class Account:
    def __init__(self, holder_name) -> None: 
       self.holder_name=holder_name
       
class Student_account(Account):
    def __init__(self, holder_name, balance, college) -> None:
        self.__balance=balance # private

    def deposit(self,amount):
        self.__balance+=amount

    def withdraw(self,amount):
        self.__balance-=amount

    def get_balance(self):
        return self.__balance

babul=Student_account("babul",20000, "x college")
print(babul.get_balance())
# print(babul.__balance) # cant access like this, this is private

# one hidden mehod to access private attribute
print(dir(babul))
print(babul._Student_account__balance)

# lets modify private attribute-using hidden method
babul._Student_account__balance=12
print(babul.get_balance())
print(babul._Student_account__balance)
