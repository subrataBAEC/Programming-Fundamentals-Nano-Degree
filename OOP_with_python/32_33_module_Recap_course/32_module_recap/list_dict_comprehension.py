

# list comprehension
# example 1
# expression for item in range()
lst=["hello", "world", "python"]
new_lst=[x.upper() for x in lst]
print(new_lst)

# example 2
x=[i for i in range(1, 10)]
print(x)

# example 3
x="billu"
y=[i.upper() for i in x]
print(y)

# example 4 (print even numbers in 1 to 20)
lst=[x for x in range(1,21) if x%2==0]
print(lst)

# example 5 (double condition)
lst=[x for x in range(100) if x%3==0 if x%5==0]
print(lst)

# example 6 (if- else)
lst=[1,1, 2, 5, 2, 9, 0]
lst=["even" if x%2==0 else "Odd" for x in lst]
print(lst)

# example 7 (double lists)
lst=[(x, y) for x in [1,2,3,4,5] for y in [1,2,3,7,8] if x!=y]
print(lst)

# dictionary comprehension
# example 1
dct={i:i+10 for i in range(10)} # key: value
print(dct)

# example 2 (find even values )
dct={"messi": 33, "ronaldo": 34, "neymar": 26}
new_dct={k:v for k,v in dct.items() if v%2==0}
print(new_dct)

# example 3 (find even values and age smaller than 30)
dct={"messi": 33, "ronaldo": 34, "neymar": 26}
new_dct={k:v for k,v in dct.items() if v%2==0 if v<30 }
print(new_dct)

# example 4 (change values)
dct={"messi": 33, "ronaldo": 34, "neymar": 26}
new_dct={k:("old" if v>30 else "young") for k,v in dct.items()}
print(new_dct)
