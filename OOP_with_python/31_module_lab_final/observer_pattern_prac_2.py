# observers design pattern practice 2

"""
https://python.plainenglish.io/design-patterns-in-python-observer-pattern-3d65307ab46a
"""
from abc import ABC, abstractmethod

# observable interface
class IObservable(ABC):
    
    @abstractmethod
    def add(self, observer):
        pass
    
    @abstractmethod
    def remove(self, observer):
        pass
    
    @abstractmethod
    def notify():
        pass

# implement observable interface: secret new source
class Secret_source(IObservable):
    def __init__(self) -> None:
        self.subscribers=[]

    def add(self, observer):
        print(f"{observer.name}: added")
        self.subscribers.append(observer)
        return
    def remove(self, observer):
        print(f"{observer.name}: removed")
        self.subscribers.remove(observer)
    
    def notify(self, message):
        for observer in self.subscribers:
            observer.update(message)

    
# observer or subscriber interface
class IObserver(ABC):
    @abstractmethod
    def update(self, message):
        pass

# implement observer interface
class CNN(IObserver):
    name="CNN news"
    def update(self, message):
        print("CNN news received:", message)
        return

class FOX(IObserver):
    name="FOX news"
    def update(self, message):
        print("Fox news received:",message)
        return


if __name__=="__main__":
    # instance of observable
    publisher=Secret_source()

    # instance of observers
    cnn=CNN()
    fox=FOX()


    # add subscribers/observers to publisher
    publisher.add(cnn)
    publisher.add(fox)

    publisher.notify("breaking news!")

    publisher.remove(cnn)
    publisher.notify("huhu")







    


