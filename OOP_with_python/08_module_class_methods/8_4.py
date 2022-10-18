class Shop:
    cart=[]
    
    def __init__(self, buyer):
        self.buyer=buyer
        
    def add_to_cart(self, item) :
        self.cart.append(item)
        
#1
shopper1=Shop("babul") 
shopper1.add_to_cart("book")   
print(shopper1.cart)

#2
shopper2=Shop("kabul") 
shopper2.add_to_cart("pen")   
print(shopper2.cart)

#3 laptop
class Laptop:
    def __init__(self, brand, age):
        self.brand=brand
        self.age=age
        
    def increase_age(self):
        self.age=self.age+1
        
my_lp=Laptop("asus", 2)
print(my_lp.brand)
print(my_lp.age)
my_lp.increase_age()
my_lp.increase_age()
print(my_lp.age)
#print(age)