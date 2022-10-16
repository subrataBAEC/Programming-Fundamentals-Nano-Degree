"""
module - 03.5 (complete)
practice - 07

Write a program to check if the given number is a palindrome number.
Input : 121
Output : True

"""

n=56865
n=str(n)
rev=""

for c in n:
    rev=c+rev

print(rev)

if rev==n:
    print("true")
elif rev!=n:
    print("false")
