#8-6 shopping 

class Shopper:
    def __init__(self, name):
        self.name=name
        self.cart=[]
    
    def add_to_cart(self, item, price, quantity):
        self.cart.append({"item": item, "price":price,"quantity":quantity })
        
    def checkout(self, amount):
         
         #print(self.cart)
         tot=0
         
         for item in self.cart:
             print(item)
             tot+=item["price"] * item["quantity"]
             
         print ("total amount:", tot)
         print(f"deposit:{amount}")
         
         if amount<tot:
             return f'more need {tot - amount}'
         elif amount>tot:
             return f"extra money {amount- tot}"       
         else:
             return "thanks"    
             
         
#add         
shopping=Shopper(" abul mia")
shopping. add_to_cart("shirt", 500, 3)
shopping. add_to_cart("pant", 600, 3)

ans=shopping. checkout (5000)
print(ans)
print()


 #add
shopping=Shopper("binod das")
shopping. add_to_cart("tshirt", 1500, 2)
shopping. add_to_cart("cap", 500, 2)

ans=shopping. checkout (1000)
print(ans)