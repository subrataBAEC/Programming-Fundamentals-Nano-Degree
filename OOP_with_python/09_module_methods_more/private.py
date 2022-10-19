# make attribute private

class User:
    def __init__(self, name, password, phone):
        # self.name=name
        # self.password=password # not private
        # self.phone=phone

        self.name=name
        self.__password=password # make private
        self.__phone=phone

    # also methods can be made private
    def __get_pass(self):
        return self.__password
    
    # make a login verification system to get the phone
    def login(self, name, password):
        if(name==self.name and password==self.__password):
            return f"matched!! your mobile is:{self.__phone}"
        else:
            return "not matched"


my_account=User("tom jerry", "12345", 9860)
# print(my_account.__password)
# print(my_account.__phone)
res=my_account.login("ajhj",'345')
print(res)
res=my_account.login("tom jerry", "12345")
print(res)

# res2=my_account.__get_pass()
# print(res2)