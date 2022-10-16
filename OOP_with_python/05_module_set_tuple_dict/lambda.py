# module 5
# lamda function

def sum (x,y):
    return x+y

res=sum(10,4)
print(res)

# using lamda- sum
sum=lambda x,y:x+y

res=sum(10,20)
print(res)

# using lamda- square
sq=lambda x:x*x

res=sq(3)
print(res)

# with list
list1 = [1, 2, 3, 4, 5]

# def dubl(x):
#     return x*2

triple_it=lambda x:x*3 #function done

triple_list1=map(triple_it,list1) # map(func, iterator-list/set/tup)
triple_list1=map(lambda x:x*3,list1) # shortcut
print(list1)
print(list(triple_list1))

sqr_list1=map(lambda x:x*x,list1) # square
print(list(sqr_list1))

# filter
# get even numbers only- using filter
even_list1=filter(lambda x: (x%2)==0,list1) # square
print(list(even_list1))

# filter - in list of dictionaries
students=[
    {"name":'abul', 'age':20},
    {"name":'babul', 'age':23},
    {"name":'nabul', 'age':40},
    {"name":'kabul', 'age':45},
    ]
seniors=filter(lambda st: st['age']>35, students)
juniors=filter(lambda st: st['age']<40, students)

print(list(seniors))
print(tuple(juniors))
