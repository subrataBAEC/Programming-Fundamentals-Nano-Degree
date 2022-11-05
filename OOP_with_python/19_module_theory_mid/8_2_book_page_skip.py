import keyboard


with open('File.txt','r') as file:
    lines=file.readlines() 

# converting to string from list
s=''
for i in lines:    
    s+=i
# print(s)

# split when "--" is found
res=s.split("--")
print(res)

# main operation
i=0
while True:
    print(i, res[i])
    num=input("Enter a number: ")
    # print(num, type(num)) # num- string class

    if num.isdigit():
        num=int(num)
        # print(num, type(num)) # num- int
        # print(res[num])
        i=num+i
    else:
        print(num, type(num))













# # print("first:",res[0])
# print(len(res))
# i=0
# print(res[i])

# for index, item in enumerate(res):
#     print(index, item)
#     # print(item[2])
# # print(item[:])
