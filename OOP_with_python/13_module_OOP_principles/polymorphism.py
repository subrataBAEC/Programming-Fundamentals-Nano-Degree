# module 13-6
# polymorphism

"""""
polymorphism- parent method overriding.
if the same method is in parent class and child class, child class works. 
it  overrides the parent class method.

polymorphism-  same method produces different output.
"""""

class Animal:
    def __init__(self,name) -> None:
        self.name=name

    def make_sound(self):
        print("animal is making sound")

class cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print(f"cat {self.name} is making soung")

class horse(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print(f"horse {self.name} is making soung")

class Dog(Animal):
    def __init__(self, name) -> None:
        Animal.__init__(self, name)

    # def make_sound(self):
    #     print(f"dog {self.name} is making soung")


tom=cat("tom")
# tom.make_sound()

horse1=horse("arabian")
# horse1.make_sound()

rocky=Dog("rocky")
# rocky.make_sound()

animals=[tom, horse1, rocky]

for animal in animals:
    animal.make_sound() # same method produces different output