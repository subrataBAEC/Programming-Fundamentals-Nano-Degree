# observer desing pattern

class Group_chat:
    def __init__(self) -> None:
        self.__observers=[]

    def attach(self, observer):
        self.__observers.append(observer)
    
    def add_new_message(self, msg):
        self.notify(msg)
    
    def notify(self, msg):
        for observer in self.__observers:
            observer.update(msg)


class Observer:
    def __init__(self, name) -> None:
        self.name=name

    def update(self, msg):
        print(f"new message for {self.name}: {msg}")

# group chat object  
messenger=Group_chat()

# observer object
trump=Observer('trump')
biden=Observer('biden')
bush=Observer('bush')

# attach observers to group chat
messenger.attach(trump)
messenger.attach(biden)
messenger.attach(bush)

# send message to them
messenger.add_new_message("we need to establsh world peace")






        