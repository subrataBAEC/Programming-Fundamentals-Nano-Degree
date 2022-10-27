# module 13-4
# encapsulation-private, protected attribute

# _account_num: protected attibute can be accessed and modified from outside, inside class
# __balace: private attibute can not be accessed and modified from outside, only inside class method can access

class Account:
    def __init__(self, holder_name,account_num, balance) -> None:
        self.holder_name=holder_name
        self._account_num=account_num   # becomes protected     
        self.__balance =balance # __balance becomes private attribute and can modified inside this class only
        self._country="Bangladesh"

    def deposit(self, amount):
        print(f"{amount} deposit done")
        self.__balance+=amount

    def withdraw(self, amount):
        print(f"{amount} withdraw done")
        self.__balance-=amount

    def get_balance(self):
        return(f"present balance {self.__balance}") 

class Student_account(Account):
    def __init__(self, holder_name, account_num, balance, school) -> None:
        self.school_name=school
        super().__init__(holder_name, account_num, balance)
    
    def get_country(self):
        return (f"country {self._country}") # called from parent class

    # this does not work because cant access private __balace from another class
    # def get_balance(self): 
    #     return(f"present balance {self.__balance}") 

abul=Student_account("abul",123,23000,"udayan high school")
print(abul._account_num)
abul._account_num=456
print(abul._account_num)
print(abul._country)
print(abul.get_country)

# print(abul.__balance) # cant access because __balance is private
# print(abul.get_balance()) # cant access because __balance is private

abul.deposit(7000)
abul.withdraw(2000)
print(abul.get_balance())

# abul.__balance=0 # modifying sensitive info from outside
# print(abul.get_balance())






    