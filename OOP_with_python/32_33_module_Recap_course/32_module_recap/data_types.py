
# built in data types

# dict
dict1={"rahim":1200, "karim":2000}
print(dict1["karim"])
print(dict1.get("tarimi", "not found")) # can handle errors

# dict of dict
ch1={
    "name": "byden",
    "age": 60
}

ch2={
    "name": "khomeni",
    "age": 65
}
family={
    "ch1": ch1,
    "ch2": ch2
}

print(family.keys(), family.values())
print(family["ch1"]["name"])
print(family.get("ch3", False))
print(family.get("ch2", False).get("age")) # get value from inner dict

# convert a list of tuples to dict
a=[(1,"A"),(2,"B"),(3,"C")]
a=dict(a)
print(a)
a.pop(2) # remove a key
print(a)
print(a.keys())
print(a.values())

for key,value in a.items():
    print(key, value)

# set
# no duplicate, cant access using index
set1={1,2,2,3}
print(set1)

# reverse a string
str1="python"
print(str1[::-1])



