
# Theory Final Exam
# module 35 Question 10 (complete)

"""
Explain with examples - Single Inheritance, Multiple Inheritance and Multilevel inheritance 
"""

print("1. single inheritance- Example")
class Student: 
    def __init__(self) -> None:
        self.string1="i am a student"

class School(Student):
    def __init__(self) -> None:
        self.string2="i am the school"
        # Student.__init__(self)
        super().__init__() # this also works

s1=School()
print(s1.string2)
print(s1.string1) # can access parent elements

print("\n2. Multiple inheritance- Example")

class Gmail:
    def __init__(self) -> None:
        self.string1="i am Gmail"

class Gdrive:
    def  __init__(self) -> None:
        self.string2="i am Google drive"

class Google(Gmail, Gdrive):
    def __init__(self) -> None:
        self.string3= "i am google, i have both Gmail and Gdrive"
        Gmail.__init__(self)
        Gdrive.__init__(self)
        # here super() does not work

g1=Google()
print(g1.string1)
print(g1.string2)
print(g1.string3)

print("\n3. Multi level inheritance- Example")
class Earth:
    def __init__(self) -> None:
        self.string1="i am the earth"

class SolarSystem(Earth):
    def __init__(self) -> None:
        # super().__init__() # this also works
        Earth.__init__(self) 
        self.string2= "i am the Solar Sytem, i have the Earth"

class MilkyWay(SolarSystem):
    def __init__(self) -> None:
        # super().__init__() # this also works
        SolarSystem.__init__(self)
        self.string3="i am the galaxy, i have the solar system"

m1=MilkyWay()
print(m1.string1)
print(m1.string2)
print(m1.string3)