# Module 07
# Q 05 (complete)

# tutorial : 
"""
You have given a dictionary 'd', convert it into a list. The first value will be the key of the dict, and value will come next. 

Example
x = { 'a' : 1, 'b' :  2, 'c': 3, 'd': 4}
output:  [ 'a', 1, 'b',  2, 'c', 3, 'd', 4]

Now do the same for -
d = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}

Write a function named create_list() and write your code inside this function.
"""

def create_list(dict):
    # print(dict.items())
    list_items=list(dict.items())
    list_keys=list(dict.keys())
    list_vals=list(dict.values())

    # print(list_items)
    # print(list_keys)
    # print(list_vals)

    new_list=[] # empty list

    for i in range(len(list_vals)):
        new_list.append(list_keys[i])
        new_list.append(list_vals[i])

    print(new_list)


# main
dict= { 'a' : 1, 'b' :  2, 'c': 3, 'd': 4}
create_list(dict)


dict = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}
create_list(dict)