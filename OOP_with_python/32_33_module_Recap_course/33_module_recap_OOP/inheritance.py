
# single, multiple, multi level inheritance

# single inheritance

class Parent:
    def __init__(self) -> None:
        self.string1="parent"

class Child(Parent):
    def __init__(self) -> None:
        super().__init__()
        self.string2="Child"

c=Child()
# print(c.string1) 

# multiple inheritance
class Homo:
    def __init__(self) -> None:
        self.string="homo"

class Sapience:
    def __init__(self) -> None:
        self.string1="sapience"

class Human(Homo, Sapience):
    def __init__(self) -> None:
        self.string2="homo sapience"
        # super().__init__() # super does not work in multiple inheritance
        Homo.__init__(self) # now we can access all parent classes
        Sapience.__init__(self)

h1=Human()
# print(h1.string) 
# print(h1.string1)
# print(h1.string2)

# multi level inheritance
class Seed:
    def __init__(self) -> None:
        self.string="seed"

class Fruit(Seed):
    def __init__(self) -> None:
        self.string1="Fruits"
        Seed.__init__(self)

class Tree(Fruit):
    def __init__(self) -> None:
        self.string2="Tree"
        Fruit.__init__(self) 
        # super().__init__() # also works

t1=Tree()
print(t1.string1) 
print(t1.string) 

