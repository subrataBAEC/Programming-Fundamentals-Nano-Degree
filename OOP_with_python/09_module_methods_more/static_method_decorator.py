# static method
# classmethod

class Shopping:
    def __init__(self, customer):
        self.customer=customer
        self.items=[]
        self.total=0

    @staticmethod
    def multiply(x,y):
        return x*y

    def add_to_total(self, amount):
        self.total+=amount

    def add_to_cart(self, item, price, quantity):
        item_total=price*quantity
        # self.total+=item_total
        self.add_to_total(item_total)
        self.items.append(item)

    def checkout(self):
        pass

# mulyiply is a static method, it can be used without instantiating
res=Shopping.multiply(4,5)
print(res)

#add_to_total is not a static method, it can't be used without instantiating
# Shopping.add_to_total(500) # gives error

shopper1=Shopping("abul mia") # instatiating
shopper1.add_to_total(500)
shopper1.add_to_total(5200)
print(shopper1.total)



