
""""
also watch the video: https://www.youtube.com/watch?v=-a1PFtooGo4&ab_channel=NeuralNine
"""
# CNG class
class CNG:
    def __init__(self, name, rate) -> None:
        self.name=name
        self.rate=rate

    def get_fare(self, distance):
        return distance*self.rate

# Bike Class
class Bike:
    def __init__(self, name, rate) -> None:
        self.name=name
        self.rate=rate

    def get_fare(self, distance):
        return distance*self.rate

class Vehicle_factory:

    def factory_ride(vehicle_type):
        vehicles={
            "cng": CNG,
            "bike": Bike
        }
        return vehicles[vehicle_type]()

choice=input("CNG/Bike?")
vehicle=Vehicle_factory.factory_ride(choice)
vehicle(choice,5)
vehicle.get_fare(10)


