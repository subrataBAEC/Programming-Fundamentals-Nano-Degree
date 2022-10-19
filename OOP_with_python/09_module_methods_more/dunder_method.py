# module 9
# dunder method
# speical magic 

from unicodedata import name


# num1= 10
# num2=20
# print(num1+num2)

# name1= "abul"
# name2="babul"
# print(name2+name2)

# list1=[1,2,3,4]
# list2=[6,7,8,9]
# print(list1+list2)

# is_res1=True
# is_res2=True
# print(is_res1+is_res2)


class Patient:
    def __init__(self, name, age, money, height=62):
        self.name=name
        self.age=age
        self.money=money
        self.height=height

    # give sum
    def __add__(self, other):
        # return self.money+other.money
        return self.age+other.age
    
    # print info
    def __call__(self):
        return f"this is: {self.name} with age {self.age}, have {self.money} Taka, height:{self.height}"
    
    # check equal
    def __eq__(self, other):
        return self.age==other.age

    # length
    def __len__(self):
        return self.height

    # string representation
    def __repr__(self)-> str:
        return f"name: {name}, age: {self.age}, money: {self.money}, height: {self.height}"

pt1=Patient("abul", 20, 500)
pt2=Patient("babu", 25, 1000, 50)

# this is possible due to __add__
print(pt1+pt2) # __add__  works here
print(pt1.__call__()) #__call__ works here
print(pt2.__call__()) #__call__ works here

print(pt1==pt2) # __eq__ works here
print(len(pt1)) # __len__ works here
print(len(pt2)) # __len__ works here

print(pt2()) # __rpr__ works here
# pt1.name

