# getter setter 
# @ property, @ deleter

class User:
    def __init__(self, f_name, l_name):
        self.first=f_name
        self.last=l_name
        self.email=f"{self.first}.{self.last}@user.com"

    @property #-make a method to attribute
    def full_name(self):
        return f"{self.first} {self.last}"

    @full_name.setter # setter
    def full_name(self, value):
        # self.first=value.split(" ")[0]
        # self.last=value.split(" ")[1]

        first,last=value.split(" ")
        self.first=first
        self.last=last
        self.email=f"{first}.{last}@user.com"
    
    @full_name.deleter # deleter
    def full_name(self):
        del self.first
        del self.last        

    def get_email(self):
        return self.email

mark=User("mark","depp")  
print(mark.first)  
print(mark.last)
print(mark.email)  # get email from attribute
print(mark.get_email()) # get email from method
# print(mark.full_name()) # get name from method

# use method as attribute- use @ property
print(mark.full_name) # here,  full name is an attribute

# setter - update email, full name
mark.full_name="tom hanks"
print(mark.full_name)
print(mark.email)

# del mark.full_name # delete full name
# print(mark.full_name)


