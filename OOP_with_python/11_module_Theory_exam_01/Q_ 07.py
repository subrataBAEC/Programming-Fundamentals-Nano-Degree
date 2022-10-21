# module 11- Lab exam 01
# question 07 (complete)

"""""
7. Write a Python class to get all possible unique subsets from a set of integers.
Input  : [4, 5, 6] 
Output : [[], [6], [5], [5, 6], [4], [4, 6], [4, 5], [4, 5, 6]]
link: https://www.youtube.com/watch?v=Y85dfkCSlP8&ab_channel=Insidecode
link: https://datagy.io/python-int-to-binary/#:~:text=do%20just%20that!-,Use%20Python%20bin%20to%20Convert%20Int%20to%20Binary,is%20prefixed%20by%20'0b'%20.

"""""

Input  = [4,5,6] 
all_subsets=[]
for i in range(2**len(Input)): # 16 elements
    binary=bin(i)[2:] # converting to binary, eliminationg b
    binary=binary.zfill(len(Input)) # equal length with zero filling
    # print((binary), type(binary))

    subset=[]
    for j in range(len(Input)):
        # print(binary[j])
        if binary[j]=='1': # considering 1 in binary (ex. 0010)
            subset.append(Input[j]) # taking 2nd index value from Input
    all_subsets.append(subset)
    
print(all_subsets)
