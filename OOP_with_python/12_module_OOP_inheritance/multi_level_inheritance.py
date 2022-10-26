# module 12-6
# multi level inheritance

# parent class/Base class
from math import remainder


class Vehicle:
    def __init__(self, name, license, price):
        self.name=name
        self.license=license
        self.price=price
        print("Vehicle init called")
    
    def start(self):
        print(f"car:{self.name} started")

# child class/derived class
class Bus(Vehicle):
    def __init__(self, name, license, price, seat, ticket_price):
        # super().__init__(name, license, price)
        self.seat=seat
        self.avaiable_seats=seat
        self.ticket_price=ticket_price
        print("Bus init called")
        super().__init__(name, license, price)
    
    def sell_ticket(self,customer_name, quantity, amount):
        self.available_seats-=quantity
        remainder=amount-self.ticket_price*quantity
        if remainder>=0:
            return Ticket(customer_name)
        return "no ticket"

class AC_bus(Bus):
    def __init__(self):
        print("AC bus created")

class Mini_bus(Bus):
    def __init__(self):
        print("mini bus init called")
        super().__init__("hyace mini bus", "Dha 123", 12000, 40, 350)
        
class Ticket:
    def __init__(self, owner) -> None:
       self.owner=owner


#main()
mini=Mini_bus()
print(mini.name) # works after adding super in Bus class,otw doesnot work
print(mini.seat)
print(mini.avaiable_seats)
print(mini.ticket_price)
print(mini.license)


