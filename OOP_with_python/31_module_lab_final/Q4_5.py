# lab final
# question 4, 5

import statistics
import math

rainfall=[]
# rainfall=[2, 2.5, 1.25, 3.1, 1.75, 2.8, 1.8]

for i in range(7):
    print(f"input ranfall data for day {i+1}: ")
    a=int(input())
    rainfall.append(a)

print(rainfall)
print(f"max rainfall day number: {rainfall.index(max(rainfall))+1} and max ranfll is {max(rainfall)}")
print(f"min rainfall day number: {rainfall.index(min(rainfall))+1} and min ranfll is {min(rainfall)}")

# mean and SD
mean=sum(rainfall)/7.00
print(f"mean: {mean}")

std=statistics.stdev(rainfall)
print(f"std: {std}")

# manual calculation of SD
Sum= 0
for i in rainfall :
     Sum +=(i-mean)**2

stdeV = math.sqrt(Sum/7) 
print(stdeV)