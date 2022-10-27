# module 13-2
# abstract base class, abstract method

from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass

    def name(self):
        pass

    @abstractmethod
    def move(self):
        print("jumping on hills")

class Monkey(Animal):
    def sing(self):
        print("monkey is singing")

    def eat(self):
        print("eating dinos")

    def move(self):
        # return super().move()
        print("running")

king_king=Monkey()
king_king.sing()
king_king.eat()
king_king.move()
