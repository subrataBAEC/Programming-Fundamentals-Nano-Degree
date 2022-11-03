# Module 16-2, 16-3, 16-4(import class from brta)
# 16-2: creat user with password verification
# 16-3: creat riders(customer) and drivers 
# 16-4: creat License check authority, creat license and validate license
# 16-6: creat ride manager to add vechicles  
# 16-7: set riders and drivers with vehicle on ride manager
# 16-8: Find a driver who is close to the rider/customer



import hashlib
from brta_class import BRTA 
from vechicle_class import Car, Bike, Cng
from ride_manager import uber

from random import random,randint

license_authority=BRTA() 

class User:
    def __init__(self, name, email, password):
        self.name=name
        self.email=email
        # self.password=password
        pwd_encrypted=hashlib.md5(password.encode()).hexdigest()

        with open('users.txt','w') as file:
            file.write(f"{email} {pwd_encrypted}\n")
        file.close()
        print(self.name, 'user created')
    
    # user login method- static methos
    @staticmethod    
    def log_in(email, password):
        stored_password=' '
        with open('users.txt','r') as file:
            lines=file.readlines() # more than one user
            print(lines)
            for line in lines:
                if email in line:   
                    # stored_password=line.split(' ')[1]
                    _, stored_password=line.split(' ')
                    print("password found", stored_password)
        file.close()

        # verify login
        hashed_pass=hashlib.md5(password.encode()).hexdigest()
        # print(hashed_pass, stored_password)
        # hashed_pass=str(hashed_pass)
        # stored_password=str(stored_password)

        if hashed_pass == stored_password:      # This gives wrong op      
            print("valid user")

        else:
            print(hashed_pass, stored_password)
            print("no valid user")
    
class Rider(User): # uber customer
    def __init__(self, name, email, password, location, balance):
        super().__init__(name, email, password)
        self.location=location
        self.balance=balance
    
    # set new location
    def set_location(self, location):
        self.location=location
    
    # get location info
    def get_locaion(self):
        return self.location

    def request_trip(self, destination):
        pass

    def start_trip(self, fare):
        self.balance-=fare

# uber driver
class Driver(User):
    def __init__(self, name, email, password, location, license):
        super().__init__(name, email, password) 
        self.location=location
        self.license=license
        self.earning=0 # initial income zero
        
        # check the validity of the license
        self.valid_driver=license_authority.validate_license(email, password)

    # if the driver has no license, take a driving test
    def take_driving_test(self):
        result=license_authority.take_driving_test(self.email)
        if result==False: # test failed
            print("sorry, no valid license")
        else:
            self.license=result # driver passed, give a license number        
            self.valid_driver=True
    
    # if the license is valid , add a vechilce by driver
    def register_a_vehicle(self, vehicle_type,license_plate,rate):
        if self.valid_driver is True:            
            if vehicle_type=="car":
                new_vehicle=Car(vehicle_type,license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            elif vehicle_type=="bike":
                new_vehicle=Bike(vehicle_type,license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            else:
                new_vehicle==Cng(vehicle_type,license_plate,rate,self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)  
        
        else:
                print("you are not a valid driver")

    def start_trip(self, destination, fare):
        self.earning+=fare       
        self.location=destination 

# main()
# add riders/customers
rider1=Rider("abul","abul@com","abul1",randint(1,30),5000) # location-integer
# print(dir(rider1))
rider2=Rider("kabul","kabul@com","kabul1",randint(1,30),5000)

# add drivers
driver1=Driver("driver1","driver@com","driver1",randint(0,30),5436)
driver1.take_driving_test()
driver1.register_a_vehicle("car",1234,10)

driver2=Driver("driver2","driver@com","driver2",randint(0,30),5436)
driver2.take_driving_test()
driver2.register_a_vehicle("car",1032,10)

driver3=Driver("driver3","driver@com","driver3",randint(0,30),5436)
driver3.take_driving_test()
driver3.register_a_vehicle("car",5568,10)

driver4=Driver("driver4","driver@com","driver4",randint(0,30),5436)
driver4.take_driving_test()
driver4.register_a_vehicle("car",8960,10)


# get avaiable cars
print(uber.get_available_cars())
uber.find_a_vehicle(rider1,"car",90)


