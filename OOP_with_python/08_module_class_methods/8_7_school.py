# 8-7 school

class Student:
    def __init__(self, name, age, id):
        self.name=name
        self.age=age
        self.id=id

class Course:
    def __init__(self, name, teacher):
        self.name=name
        self.teacher=teacher

class Teacher:
    def __init__(self, name, course):
        self.name=name
        self.course=course

class School:
    def __init__(self, name, teachers, courses, students):
        self.name=name
        self.teachers=teachers
        self.courses=courses
        self.students=students
    
    def get_students(self):
        for student in self.students:
            print(student.name, student.id)

    def get_teachers(self):
        for teacher in self.teachers:
            print(teacher.name)
    
    def get_courses(self):
        for course in self.courses:
            print(course.name)

    

# main
school_name="pathsala"

ds_course=Course("Data structure","newton")
algo_course=Course("algo","tesla")

teacher_1=Teacher("newton","Data structure")
teacher_2=Teacher("tesla","algo")

student_1=Student("abul",20, 123)
student_2=Student("babul",22, 456)

teachers=[teacher_1,teacher_2]
courses=[ds_course,algo_course]
students=[student_1,student_2]

my_school=School(school_name, teachers, courses, students)

# print(my_school.students)
my_school.get_teachers()
my_school.get_students()
my_school.get_courses()





