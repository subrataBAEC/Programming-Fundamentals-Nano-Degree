# question 8 incomplete
"""
def sum_odd(n, total):
    while True:
        if n==1:
            # print("one:", n, total)
            return total
            break
        elif n%2==0:
            # print("even:", n, total)
            n=n-1
        else:
            # print("odd:", n, total)
            total=total+n
            n=n-2

res=sum_odd(23, 199)
print(res)

"""
"""
def max(l,n):
  while True:
    if l==[]:
        # print(l,n)
        return n
        # break
    elif l[0]>n:
        # print(l,n)
        n=l[0]
        l=l[1:]
    else:
        # print(l,n)
        l=l[1:]
        n=n

# l=[1,2,3,4,5,6]
l=[5,4,3,1,2,3,8]
n=max(l,3)
print(n)
"""

def mylen(l,n):
    while True:
        if l==[]:
            # print(l,n)
            return n
        else:
            # print(l,n)
            n=n+1
            l=l[1:]

l=[5,4,3,1,2,3,8]
n=mylen(l,8)
print(n)