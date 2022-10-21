# module 11- Lab exam 01
# question 05 (complete)

"""""
5. Write a python program to read student_name and mark from keyboard and 
store the data in a text file with an unique student_id .

"""""
class Student:
    all_students=[]
    st=[]
    def __init__(self,student_name, mark):
        self.student_name=student_name
        self.mark=mark

# student info
unique_id=5000
while True:
    unique_id+=1    
    name,marks=input("enter name and marks: ").split()
    st2=Student(name,marks)
    st=[]
    st.append(unique_id)
    st.append(st2.student_name)
    st.append(st2.mark)
    #print(st)
    st2.all_students.append(st)
    # print(st2.all_students)
    ans=input("want to input more: press 0 to quit: ")
    ans=int(ans)
    if(ans==0):
        break
    
#convert to string and store
with open("student_info.txt", "w") as output:
    output.write(str(st2.all_students))