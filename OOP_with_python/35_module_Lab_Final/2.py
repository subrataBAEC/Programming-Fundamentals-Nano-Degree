# Theory Final Exam
# module 35 Question 2(complete)

"""
Write a python program to make the data given below using list and dictionary comprehension and print it.								10

data={1:[2,3,4,5],2:[1,3,4,5],3:[1,2,4,5],4:[1,2,3,5],5:[1,2,3,4]}
"""

# method 1
lst=[x for x in range(1,6)]
# print(lst)

data={k:[x for x in lst if x!=k] for k in range(1,6)}
print(data)

"""
# method 2
dct={k: [item for item in [x for x in range(1,6)] if item!=k] for k in range(1,6)  }
print(dct)

# method 3
data={k: [x for x in range(1,6) if x!=k] for k in range(1,6)}
# print(data)

"""

"""
# without dict and list comprehension
lst=[x for x in range(1,6)]
dct={}
# print(lst)

for i in range(1,6):
    lst1=[]
    for item in lst:
        # print(i,item)
        if i!=item:
            lst1.append(item)
    # print(lst1)
    dct[i]=lst1
    print(dct)
"""
