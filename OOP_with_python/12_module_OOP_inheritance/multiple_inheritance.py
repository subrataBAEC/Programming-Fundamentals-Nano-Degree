# module 12-7
# multiple inheritance

class School:
    def __init__(self, school_name):
        self.school_name=school_name
        print("school class called")

class Grade:
    def __init__(self, grade_name):
        self.grade_name=grade_name
        print("grade class called")

class Sports_team:
    def __init__(self, sports_name):
        self.sports_name=sports_name
        self.team=[]

    def add_player(self, player_name):
        self.team.append(player_name)

# derived class with multiple inheritance
class Student(School, Grade, Sports_team):
    def __init__(self, name, grade_name, school_name, sports_name):
        self.name=name # student name
        print("student class called")
        Grade.__init__(self, grade_name)
        School.__init__(self, school_name)
        Sports_team.__init__(self,sports_name)

abul=Student("abul","class 10", "x high school", "hocky")
print(abul.name)
print(abul.grade_name)
print(abul.school_name)
print(abul.sports_name)

# change school name
abul.school_name="y high school"
print(abul.school_name)

# add player
print(abul.team)
abul.add_player("babul")
abul.add_player("abul")

print(abul.team)




