# without using factory method
# a ride sharing company having multiple types of vehicles
""""
when multiple classes with same types are created, they can creat problem.

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


c=CNG("tony",10)
b=Bike("trump",15)
print(c.get_fare(10))
print(b.get_fare(4))


