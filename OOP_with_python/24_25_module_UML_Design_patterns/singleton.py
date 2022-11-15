# module 25 : Design Pattern
# singleton design pattern

"""
singleton: can have only one instance

"""

class Singleton:
    __instance=None
    def __init__(self) -> None:
        if Singleton.__instance==None:
            Singleton.__instance=self
        else:
            raise Exception("This is singleton. already have an instance")
    
    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance

# with get_instance() method one instance can be used in different placces
first=Singleton.get_instance()
second=Singleton.get_instance()
print(first)
print(second)