# facade design pattern

class Washing:
    "subsystem 1"
    def wash(self):
        print("washing")

class Rinsing:
    "subsystem 2"
    def rines(self):
        print("rinsing")

class Spinning:
    "subsystem 3"
    def spin(self):
        print("spinning")

class Drying:
    "subsystem 4"
    def dry(self):
        print("Drying")   

class Washing_machine:
    def __init__(self) -> None:
        self.washing=Washing()
        self.rinsing=Rinsing()
        self.spinning=Spinning()
        self.drying=Drying()
    
    def startWashing(self):
        self.washing.wash()
        self.rinsing.rines()
        self.spinning.spin()
        self.drying.dry()
    
#main
"""
no need call separately, startwashing will call every method all at once
"""
walton=Washing_machine()
walton.startWashing()
