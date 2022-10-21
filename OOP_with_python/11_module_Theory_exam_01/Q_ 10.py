# module 11- Lab exam 01
# question 10 (complete)

"""""
10. Write a Python class named Distance constructed by two points (x1, y1), (x2, y2)
and a method which will compute the distance between those points.
"""""

import math
class Distance:
    def __init__(self,x1,y1,x2,y2):
        self.x1=x1
        self.y1=y1
        self.x2=x2
        self.y2=y2

    # method
    def calc_distance(self):
        res=pow((self.x1-self.x2),2)+pow((self.y1-self.y2),2)
        distance=math.sqrt(res)
        return distance

# driver function
x1,y1=input("first coordinate: ").split()
x1,y1= int(x1), int(y1)
x2,y2=input("second coordinate: ").split()
x2,y2= int(x2), int(y2)

calc1=Distance(x1,y1,x2,y2) 
res=calc1.calc_distance()
print(res)