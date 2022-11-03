# 16-6: Ride manager 
# - ride manager to add vechicles 

class RideManager:
    def __init__(self) -> None:
        print("ride manager activated")
        # vehicl lists according to category
        self.__available_cars=[]
        self.__available_bikes=[]
        self.__available_cng=[]

    def add_a_vehicle(self, vehicle_type, vehicle):
        if vehicle_type=='car':
            self.__available_cars.append(vehicle)
        elif vehicle_type=='bike':
            self.__available_bikes.append(vehicle)
        else:
            self.__available_cng.append(vehicle)
    
    def get_available_cars(self):
        return self.__available_cars

    
    def find_a_vehicle(self, rider, vehcicle_type, destination):
        if vehcicle_type=="car":
            if len(self.__available_cars)==0:
                print("sorry no cars avaiable")
                return False
            else:
                for car in self.__available_cars:
                    print("potential",rider.location, car.driver.location )
                    if abs(rider.location-car.driver.location)<10:
                        print("car match found")
                        return True



uber=RideManager()