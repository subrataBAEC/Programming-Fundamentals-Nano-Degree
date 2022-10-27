# module 13-7
# method overriding and operator overloading

"""""
method overloading

"""""

# def add(num1, num2):
#     return num1+num2

from os import access


def add(num1, num2, num3=0, num4=0):
    return num1+num2+num3+num4

print(add(2,3))

def add2(*args, **kwargs):
    pass

"""""
# operator overloading: using operator as my choice 

"""""

print(1+2)
print("h"+"i")

class Account:
    def __init__(self, name, balance) -> None:
        self.name=name
        self.__balance=balance
    # add
    def __add__(self, other):
        return self.__balance+other.__balance

    # dunder method: check equal
    def __eq__(self, __o: object) -> bool:
        return self.__balance == __o.__balance

babul_account=Account("abul",20000)
hablu_account=Account("hablu",10000)
res=babul_account+hablu_account
print(res)

print(babul_account==hablu_account)