# Module 07
# Q 01 (complete)
"""
1. Create a string out of some words given in a list -

l = ["This", "is", "very", "fantastic"]


Expected Output:
"This is very fantastic"

Write a function named create_string() and write your code inside this function.

"""


def create_string(list):
    for i in list:
        print(i, end=" ")


l = ["This", "is", "very", "fantastic"]

create_string(l)
