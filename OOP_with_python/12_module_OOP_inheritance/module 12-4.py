# module 12-4, 12-5
# Common Uncommon attributes and methods between classes
# single level inheritance and use of super

# base class- for holding common attributes in different classes

class Device:
    def __init__(self, brand, price, color) -> None:
        self.brand=brand
        self.price=price
        self.color=color
    
    def re_sale(self):
        print("ready to re sale")


class Laptop(Device): # base case used here
    def __init__(self, brand, price, color, disk_size):
        # self.brand=brand
        # self.price=price
        # self.color=color
        # super()- inheriate attributes from parent class
        super().__init__(brand, price, color)
        self.disk_size=disk_size

    def run(self):
        print("Turn on/running the laptop")

    def purchase(self, money):
        if money< self.price:
            return "no laptop for you"
        else:
            print("this device is for you")
            return money-self.price
    
    # dunder method-to display
    def __repr__(self) -> str:
        return f"laptop {self.brand}: {self.price}: {self.color}"

class Phone:
        def __init__(self, brand, price, color, camera, sim_num) -> None:
            self.brand=brand
            self.price=price
            self.color=color
            self.camera=camera
            self.sim_num=sim_num
    
        # dunder method-to display
        def __repr__(self) -> str:
            return f"phone {self.brand}: {self.price}: {self.color}"

class Watch:
    def __init__(self, brand, price, color, type) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.type=type

    def is_digital(self):
        return self.type=="digital" # true if digital


class Manager:
    def __init__(self, name, salary, experience, designation) -> None:
        pass

    def withdraw_salary(self):
        pass

    def handle_customer_complain(self):
        pass

class SalesPerson:
    def __init__(self, name, salary, experience, designation, commission) -> None:
        pass

    def withdraw_salary(self):
        pass

    def handle_customer(self):
        pass

# main()
lenovo=Laptop('Lenovo', 40000, "gold", "1TB")
asus=Laptop("asus", 40200, "ash", "500GB")
print(lenovo)
print(asus)

xiaomi= Phone("redmi",17000, "black", "20 MP", 2)
samsung=Phone("samsung",20000,"white","15 MP",1)
print(xiaomi)

asus.re_sale()
print(asus.brand)