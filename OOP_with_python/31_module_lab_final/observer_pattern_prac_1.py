# observers design pattern practice
"""
https://python.plainenglish.io/observer-design-pattern-in-python-9944af5d15d3
"""
# avengers

from abc import ABC, abstractclassmethod

""" 
Interface AvengersTeam represents the publisher
"""
class Avengers_Team(ABC):

    @abstractclassmethod
    def add(self, observer):
        pass

    @abstractclassmethod
    def remove(self, observer):
        pass
    
    @abstractclassmethod
    def notify(self):
        pass

"""  
ConcreteAvengersTeam implements interface AvengersTeam.
ConcreteAvengersTeam uses _observers_list, 
which lists all the observers attached to the publisher ConcreteAvengersTeam.
"""

class Concrete_Avengers_Team(Avengers_Team):
    observer_list=[]

    def add(self, observer):
        print(f"{observer.name} addded to list") # name?
        self.observer_list.append(observer)

    def remove(self, observer):
        print(f"{observer.name} remove from list") # name?
        self.observer_list.remove(observer)
    
    def notify(self):
        print("avengers assemble!")
        for observer in self.observer_list:
            observer.update() # update?

"""
Interface Observer represents the subscriber. IronMan implements interface Observer. 
We can have multiple implementations of interface Observer. 
In other words we can have multiple subscribers, subscribed to a publisher. 
When a publisher wants to notify the subscribers, it calls update method of the subscribers (class IronMan in our example).
"""
class Observer(ABC):
    @abstractclassmethod
    def update(self, subject):
        pass

""" 
iron man
"""
class IronMan(Observer):
    name= "Iron man"

    def update(self):
        print("Iron man report")

class Thor(Observer):
    name= "Thor"

    def update(self):
        print("Thor report")

class CaptainAmerica(Observer):
    name= "Captain America"

    def update(self):
        print("Captain America report")

if __name__=="__main__":
    
    # instance of concreat avengers class
    publisher=Concrete_Avengers_Team() # observable

    #instance of IronMan and Thor classclass
    iron_man=IronMan()
    thor=Thor()
    cap=CaptainAmerica()
    
    # add iron man and thor to publisher or observable
    publisher.add(iron_man)
    publisher.add(thor)
    publisher.add(cap)

    print()
    # iron_man.update()
    publisher.notify()
    publisher.remove(iron_man)

    print()
    # iron_man.update()
    publisher.notify()


