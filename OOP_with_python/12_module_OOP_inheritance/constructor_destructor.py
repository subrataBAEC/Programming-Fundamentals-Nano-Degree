# module 12.3
# constructor, destructor

import time
class School:
    # constructor
    def __init__(self, name, address, principal=''):
        self.name=name
        self.address=address
        self.principal=principal
        self.grades=[]

    def add_grade(self, name, teacher):
        new_grade=Grade(name, teacher)
        self.grades.append(new_grade)

    def remove_grade(self, name):
        idx=0
        for i, grade in enumerate(self.grades): # find the grade in self.grades[]
            if grade.name==name:
                idx=i
        del self.grades[idx]    

class Grade:
    # constructor
    def __init__(self, name, teacher): # class name, and teacher
        self.students=[]
        self.name=name
        self.teacher=teacher

    #dunder method-to display
    def __repr__(self) -> str:
        return f"{self.name} -with teacher {self.teacher}"
    
    # destructor
    def __del__(self) :
        print(f"deleting {self.name} with {self.teacher} ")

oxford=School('udayan scholl', "dhaka", "boro sir") 
oxford.add_grade("class 3", 'dilara madam')
oxford.add_grade("class 5","dhormo sir")
oxford.add_grade("class 6","pondit sir")

print(oxford.grades)
oxford.remove_grade('class 5')
print(oxford.grades)

print("code is at the end")
time.sleep(10)