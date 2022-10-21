# module 11- Lab exam 01
# question 08 (complete)

"""""
8. Write a Python class to find a pair of elements (indices of the two numbers) 
from a given array whose sum equals a specific target number.
Input:
numbers= [10,20,10,40,50,60,70]
target=50 
Output: 3, 4

"""""

numbers= [10,20,10,40,50,60,70]
target=30
# pairs=[]
for num1 in range(len(numbers)):
    # print(numbers[num1])
    for num2 in range(num1+1, len(numbers)):
        # print(numbers[num1],numbers[num2])
        if (numbers[num1]+numbers[num2])==target:
            if num2-num1==1: # taking only adjacent numbers
                print(num1+1,num2+1)
                # pairs.append(num1+1)
                # pairs.append(num2+1)

# print(pairs)



            




