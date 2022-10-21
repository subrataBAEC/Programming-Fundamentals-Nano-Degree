# module 11- Lab exam 01
# question 01 (complete)

"""""
Create a function exp(a, n) that returns the exponential result ( an ). Read user input a and n in a single line from the keyboard.

Example input:
>> enter numbers: 2 3

Example Output:
>> result is: 8
"""""

def exp(a,n):
    # print( a, n)
    if n>=0: # for positive power
        # print( a, n)
        res=1
        for i in range(1,n+1):
            res=res*a
        return res
    elif n<0: # for inverse
        # print( a, n)
        res=1
        n=-1*n
        for i in range(1,n+1):
            res=res*a
        return (1/res)

# main()
a, n = input("enter numbers: ").split()
a, n =int(a), int(n)
# print(type (a))
# print(type (n))
res=exp(a,n)
print(f"result is: {res}")