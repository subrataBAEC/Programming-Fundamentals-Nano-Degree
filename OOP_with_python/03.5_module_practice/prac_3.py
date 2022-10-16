"""
module - 03.5 (completed)
practice - 03

Display Fibonacci series up to 10 terms
0  1  1  2  3  5  8  13  21  34

"""

n=10
a=0
b=1
for i in range(0,n-2,1):
    c=a+b
    a=b # n = n+1 th term
    b=c # n+1 = n+2 th term
    print(c,end=" ")