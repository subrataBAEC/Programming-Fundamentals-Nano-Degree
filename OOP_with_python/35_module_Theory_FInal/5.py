# Theory Final Exam
# module 35 Question 5(complete)

"""
Key:a Value:5
Key:b Value:10
Key:x Value:15
Key:y Value:20
"""
# original code with bugs
# data=[{'a':5,'b':10},{'x':15,'y':20}]
# for val in range(data):
#     for key,val2 in val:
#         print(f"Key:{key} Value:{data[key]}")

# modified code
data=[{'a':5,'b':10},{'x':15,'y':20}]
for val in data:
    for key,val in val.items():
        print(f"Key:{key} Value:{val}")



# data=[{'a':5,'b':10},{'x':15,'y':20}]
# print(type(data))

# for val in data:
# #    print(val)