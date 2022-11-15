
# another way to use the concept of singleton
class Company:
    def __init__(self, name, address) -> None:
        self.name=name
        self.address=address

# an instance of Company class
GP=Company("glow phone","Dhaka")


# now if we import GP to another file, this instance can be used multiple times
# see simple_singleton_2.py