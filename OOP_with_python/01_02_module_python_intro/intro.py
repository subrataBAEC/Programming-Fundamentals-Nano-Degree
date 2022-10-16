# module 01
#from operator import truediv


print("check")
print(10)
print("hello")

# module 02
price=8000
is_rich=True
print(type(is_rich))

place=input('where do you live:')
print(f"i live in {place}")

#conditionals
math_marks=10
phy_marks=9
if math_marks>90:
    print("go cse")
elif phy_marks>80:
    print("go EEE")
else:
    print("none")

#multi conditionals
a=100
b=200

if a==100 and b<50:
    print("ok")
else:
    print("not ok")

#nested conditionals

salary=5000
flat=True
job="BCS"

if salary>40000:
    if flat==True:
        print("valo chele")
    else:
        print("not bad,But!")
else:
    if job=="BCS":
        print("good")

# while loop
num=1
while num<=10:
    print(num)
    num=num+1
print("1 to 100 sum:")
num=1
sum=0
while num<=100:
    sum=sum+num
    num=num+1
print(sum) 

# break- continue

# num=10
# while num<=20:
#     if num==15:
#         break
#     else:
#         print(num)
#     num=num+1

num=10
while num<=20:
    num=num+1
    if (num%2)!=0:
        continue
    else:
        print(num)

# for loop and range()

place="Dhaka"   
for c in place:
    print(c)

for i in range(5,31,5): # range(start, end-exclusive, steps)
    print(i,end=" ") #print without new line
print()
print(1==1)

a="Bd"
for i in range(len(a)):
    print(a[i],end="")
