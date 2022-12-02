
"""
An example of observer design pattern.
--------------------------------------
calling top 3 football players

observable/publisher: FIFA
observers/ subscribers: players

Note: when players are called they will be notified and they will repond too.

"""

from abc import ABC, abstractmethod

"""
observable/publisher interface
"""

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

"""
implement observable interface: FIFA
"""

class FIFA(IObservable):
    def __init__(self) -> None:
        self.subscribers=[] # players list

    def add(self, observer):
        if observer not in self.subscribers:
            self.subscribers.append(observer)
            print(f"{observer.name}: added")

        else:
            print(f"{observer.name}: alreadt in the list")
        return
    def remove(self, observer):
        print(f"{observer.name}: removed")
        print(f"i am {observer.name}, i will rise!")
        self.subscribers.remove(observer)
    
    def notify(self, message):
        for observer in self.subscribers:
            observer.update(message)

    
"""
observer / subscriber / player interface
"""
class IObserver(ABC):
    @abstractmethod
    def update(self, message):
        pass

"""
implement observer/player interface

"""
class Messi(IObserver):
    name="MESSI"
    def update(self, message):
        print("Messi called-", message)
        return

class Ronaldo(IObserver):
    name="RONALDO"
    def update(self, message):
        print("Ronaldo called-",message)
        return

class Zidane(IObserver):
    name="Zidan"
    def update(self, message):
        print("Zidan called-",message)
        return

class Neymar(IObserver):
    name="Neymar"
    def update(self, message):
        print("Neymer called-", message)
        return

if __name__=="__main__":
    print("Top 3 selected players by FIFA:")
    # instance of observable
    publisher=FIFA()

    # instance of observers
    messi=Messi()
    ronaldo=Ronaldo()
    zidane=Zidane()
    neymar=Neymar()


    # add subscribers/observers to publisher
    publisher.add(messi)
    publisher.add(ronaldo)
    publisher.add(neymar)
    print("\ncall top 3 players:\n")

    # notify selected players
    publisher.notify("yes, i am ready!")
    print()

    # remove neymar
    publisher.remove(neymar)
    print()

    # add zidane and notify again
    publisher.add(zidane)
    publisher.notify("yes, i am ready!")