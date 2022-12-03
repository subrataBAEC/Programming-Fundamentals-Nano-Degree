# Theory Final Exam
# module 35 Question 6(complete)

# python pattern

"""
When n=5,
12345
21345
23145
23415
23451

When n=7,
1234567
2134567
2314567
2341567
2345167
2345617
2345671

"""

# function def. to print a row
def print_row(lst):
    for val in lst:
        print(val, end=" ")
    print()

# main()
n=int(input("enter n: "))

# creat list n by n
lst=[x for x in range(1, n+1)]
# print(lst)


print_row(lst)

for i in range(n-1):    
    if i<n-1:
        lst[i], lst[i+1]= lst[i+1], lst[i]
    print_row(lst)