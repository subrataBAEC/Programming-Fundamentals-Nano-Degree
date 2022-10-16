"""
# practice 1
# Write a python program that takes a floating number from users using input() and
# outputs both Floor and Ceil of that number.

from math import ceil, floor


num=float(input("enter a value: "))
print(ceil(num), floor(num))

"""
"""

# practice 2
# Write a function that takes 3 integer inputs from user and
# outputs absolute values of these integers without using any
# library functions.

num1=int(input("enter a value: "))
if num1<0:
    print("absolute value", num1*-1)
else:
    print("absolute value", num1)

"""

"""
# practice 4
# Write a Python program to check if user entered number is ZERO, POSITIVE or
# NEGATIVE until user does not want to quit.
# User will type 'Quit' to close the program.


while 1:
    num4=(input("enter a value: "))
    if num4=="Quit": # this should be done first
        break    
    elif int(num4)==0:
        print("zero")
    elif int(num4)>0:
        print("pos")
    elif int(num4)<0:
        print("Neg")
"""
"""
# Problem 5

# Write a Python program which iterates the integers from 1 to 50. For multiples of three
# print "Fizz" instead of the number and for the multiples of five print "Buzz". For numbers
# which are multiples of both three and five print "FizzBuzz".

for i in range(1, 51, 1):
    if (i % 3 == 0 and i % 5 == 0):
        print("Fizz-Buzz")
    elif i % 5 == 0:
        print("Buzz")
    elif i % 3 == 0:
        print("Fizz")
    else:
        print(i)
"""

# Problem 6- unsolved

# Write a Python program to print the first letter of your name using special character ‘*’.
# Expected Output For M:
# * *
# * *
# * * * *
# * * *
# * *
# * *
# * *
