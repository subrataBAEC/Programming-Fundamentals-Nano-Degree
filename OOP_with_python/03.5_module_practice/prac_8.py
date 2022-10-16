"""
module - 03.5 (complete)
practice - 08

Write a program to display all prime numbers within a range. You will be given two integers l and r . 
You have to print all the prime numbers present in the given range l and r.
Input : 25 50

Output :
29
31
37
41
43
47
"""
# function definition
def prime_range(num):
    flag=True

    for i in range(2, num):
        if num%i==0:
            flag=False
            break
    if flag==True:
        return 1
    else:
        return 0

# code
a=1
b=1000
count=0
if a==1:
    a=2 # manually excluded
for i in range(a,b):
    res=0
    res=prime_range(i)
    if res==1:
        print(i)
        count+=1

print("total: ", count)