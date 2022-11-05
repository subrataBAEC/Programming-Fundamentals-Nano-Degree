# module 19- Theory Mid Term
# Q no 2: center align (complete)
# link: https://pyformat.info/


# file read
with open('align.txt','r') as file:
    lines=file.readlines() 
    # print(lines) # all lines are in a single list

# split and append to an empty list
list=[]

for i in lines:
    # print(i)
    list.append(i.split("\n")) # split when newline is found

# print(list) # every lines are in seperate list,we need the 0'th index

# taking the 0th element and center align
for i in list:
    # print(i[0])
    print('{:^80s}'.format(i[0])) # technique 1
    # print(i[0].center(80)) # technique 2