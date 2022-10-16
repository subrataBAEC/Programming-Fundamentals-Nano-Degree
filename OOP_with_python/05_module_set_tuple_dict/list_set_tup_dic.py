# module 5
# list, set , tuple

# list- duplicate alowed
#list[start: end: step]
print("List: ")
print("--------------------")
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3]

print(nums[3])
print(nums[-1])
print(nums[0:3])
print(nums[3:])
print(nums[5:-2])
print(nums[2: 10: 2])
print(nums[-2: -9: -2])  # reverse
print(nums[:: -1])  # all reverse
nums[1] = 22  # replace
print(nums[::])

print("Set: ")
print("--------------------")
# set- no duplication, order is not maintained

list1 = [1, 2, 3, 4, 5, 2, 5, 1, 3]
set1 = {1, 2, 3, 4, 5, 2, 5, 1, 3}
print(list1)
print(set1)

set2 = set(list1)  # make a set from a list
print(set2)
set2.add(22)  # add
print(set2)
set2.remove(3)  # remove
print(set2)
print(len(list1))
print(len(set2))  # len

print("Tuple: ")
print("--------------------")
# tuple- immutable,cant be changed
list1 = [1, 2, 3, 4, 5, 2, 5, 1, 3]
list1[1] = 22
print(list1)
tuple1 = 1, 2, 3, 4, 5, 2, 5, 1, 3  # tuple declaration
tuple1 = (1, 2, 3, 4, 5, 2, 5, 1, 3)  # tuple declaration
print(tuple1)

# tuple cant be changed
# if tuple contains any mutable DS, that can be changed
tuple2D = ([1, 2, 3], [5, 8, 9])
print(tuple2D)
tuple2D[1][0] = 33
print(tuple2D)

tuple_from_list = tuple(list1)
print(tuple_from_list)

print("Dict: ")
print("--------------------")

marks = {'phy': 12, 'chem': 20, "math": 24}
print(marks)
print(marks['phy'])
marks['phy'] = 22  # replace value
print(marks)
marks['eng'] = 11  # add
print(marks)
marks_keys = marks.keys()  # keys
print(marks_keys)
marks_vals = marks.values()  # values
print(marks_vals)
marks_items = marks.items()  # key-val pair
print(marks_items)

print("loop through list, set, tuple, dict: ")
print("-------------------------------------")
# loop thorugh list

list1 = [1, 2, 3, 4, 5, 2, 5, 1, 3]
total = 0
for i in list1:
    total += i
print(total)

# loop thorugh set
set1 = {1, 2, 3, 4, 5, 2, 5, 1, 3, 5}
total = 0
for i in set1:
    total += i
print(total) # duplicates values ignored

# loop thorugh tuplpe
tuple1 = (1, 2, 3, 4, 5, 2, 5, 1, 3, 10)
total = 0
for i in tuple1:
    total += i
print(total) 

# loop thorugh dict
marks = {'phy': 12, 'chem': 20, "math": 24}

for i in marks:
    print(i) # only give keys

for i in marks:
    val=marks[i]
    print(i,val) # key-val

for sub, mark in marks.items(): # standard way    
    print(sub,val) # key-val

#use of enumerate- print with index
# list
for num in enumerate(list1): # output as tuple
    print(num)

for index,num in enumerate(list1):
    print(index, num)

# set 
for index,num in enumerate(set1):
    print(index, num)

# tuple
for num in enumerate(tuple1):
    print(num)

# dict
for num in enumerate(marks.items()):
    print(num)

for i,num in enumerate(marks.items()):
    print(i,num)