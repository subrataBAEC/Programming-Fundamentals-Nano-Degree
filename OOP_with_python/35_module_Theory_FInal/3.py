# Theory Final Exam
# module 35 Question 3(complete)

"""
4 types of scope in python:
Local, Global, Enclosed or non-local, built in
sequence: enclosed, local, global, built in
Notes:
-   local scope cant modify the global value.
-   if no local or global values exists for the same variable name, 
    built in value applies.

"""
from math import e
# mathematical constant e = 2.718281…
print("this is the built in value of e: ", e)

# setting a global value of e
e=2.50
print("this is global value of e: ", e)

def outer_func():
    e=2.123
    print("this is local scope of outer_func, value of e: ", e)

    def inner_func():
        e=2.99
        print("this is local scope of inner_func, value of e: ", e)
    inner_func()
outer_func()

print("global value is not modified in outer_func", e)