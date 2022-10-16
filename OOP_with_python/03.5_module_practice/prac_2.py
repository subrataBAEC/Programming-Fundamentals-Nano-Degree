"""
module - 03.5 (completed)
practice - 02
Write a program to print the following number pattern using a loop.
Input : 5
Output : 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
"""

n=10

for i in range(1,n+1,1):
    for j in range(1,i+1):
        print(j,end=" ")
    print()