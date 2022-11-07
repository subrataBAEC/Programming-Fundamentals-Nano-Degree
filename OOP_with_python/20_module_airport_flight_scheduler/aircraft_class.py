# Module 20.1
# aircraft class

class Aircraft:
    def  __init__(self, make, code, type, flight_range) -> None:
        self.make=make
        self.code=code
        self.type=type
        self.flight_range=flight_range

    def get_make(self): # get the make of aircraft
        return self.make

    def get_flight_range(self):
        return self.flight_range

    def __repr__(self) -> str:
        return f"aircraft make: {self.make} code: {self.code} type: {self.type} range: {self.flight_range}"