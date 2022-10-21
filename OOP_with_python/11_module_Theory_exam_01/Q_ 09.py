# module 11- Lab exam 01
# question 09 (complete)

"""""
9. Write a class with two instance variables X, n . Add two methods sum() 
and pow() to get the sum (X,n) and exponential/power of Xn .

"""""

class Calculation:
    def __init__(self, x, n):
        self.x=x
        self.n=n

    def sum(self):
        return self.x+self.n

    def pow(self):
        n=self.n
        x=self.x
        if n>=0: # for positive power
            print( x, n)
            res=1
            for i in range(1,n+1):
                res=res*x
            return res
        elif n<0: # for inverse
            print( x, n)
            res=1
            n=-1*n
            for i in range(1,n+1):
                res=res*x
            return (1/res)        

# driver function
x,n=input("enter numbers: ").split()
x, n= int(x), int(n)
number1=Calculation(x,n)
sum=number1.sum()
pow=number1.pow()
print(f"sum:{sum}, power:{pow}")

x,n=input("enter numbers: ").split()
x, n= int(x), int(n)
number2=Calculation(x,n)
sum=number2.sum()
pow=number2.pow()
print(f"sum:{sum}, power:{pow}")