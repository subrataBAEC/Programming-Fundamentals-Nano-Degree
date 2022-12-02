# Theory Final Exam
# module 35 Question 9 (complete)

"""
def f1():
    for i in range(5):
        print(f"f1 - {i}")
 
def f2():
    for i in range(5):
        print(f"f2 - {i}")
 
def f3():
    for i in range(5):
        print(f"f3 - {i}")
       
def f4():
    for i in range(5):
        print(f"f4 - {i}")
"""

# multi threading
# doing multiple tasks together

from time import sleep, perf_counter
from threading import Thread

start_time=perf_counter()

def f1():
    for i in range(5):
        print(f"f1 - {i}")
        # print("\n")
        # sleep(1)

 
def f2():
    for i in range(5):
        print(f"f2 - {i}")
        # print("\n")
        # sleep(1)

def f3():
    for i in range(5):
        print(f"f3 - {i}")
        # print("\n")
        # sleep(1)

   
def f4():
    for i in range(5):
        print(f"f4 - {i}")
        # print("\n")
        # sleep(1)

t1= Thread(target=f1)
t2=Thread(target=f2)
t3=Thread(target=f3)
t4=Thread(target=f4)


t1.start()
t2.start()
t3.start()
t4.start()

t1.join()
t2.join()
t3.join()
t4.join()

# f1()
# f2()
# f3()
# f4()

end_time=perf_counter()
print(end_time-start_time)

# 20 sec
# 5 sec