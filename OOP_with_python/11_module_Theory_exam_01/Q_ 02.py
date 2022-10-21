# module 11- Lab exam 01
# question 02 (complete)


"""""
Write a python to read three floating numbers from the keyboard in a single line with ‘-’ (dash) in between and output their sum.

Example input:
>> enter numbers: 2.3-4.5-1.7

Example Output:
>> sum is: 8.5

"""""

a=input("enter numbers: ").split("-")
# print(type(a))

sum=0
for num in a:
    # print(num)
    sum=sum+float(num)
print(f"sum is: {sum}")


# a,b,c,d=float(a), float(b), float(c), float(d)
# print(type(d))
# print(a)
# print(c)
# sum=a+b+c+d
# print(f"sum is: {sum}")
