# module 13-8
# read only property and property deleter
"""""
"""""

from unicodedata import name


class Student:
    def __init__(self, name, id, marks) -> None:
        self.__name=name
        self.__id=id
        self.marks=marks
    
    @property
    def get_id(self):
        return self.__id
   
    @property
    def name(self):
        return self.__name

    @name.deleter # this must be name,otw doesnot work
    def del_name(self):
        del self.__name

    # @name.setter
    # def set_name(self,name):
    #     self.__name=name

abul=Student("abul",123,20)
print(abul.marks)
print(abul.get_id)
print(abul.name)
# print(dir(abul))
# abul.set_name("rabu")
print(abul.name)



# del abul.name
# print(dir(abul))

