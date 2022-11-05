# module 19- Theory Mid Term
# Q no 8: book page skip (in complete)

"""""
Extend the previous challenge so that it is possible to skip forward by an arbitrary number of pages.
This should be achieved by allowing the user to enter a number before pressing the enter key.
If the number is positive, the given number of pages are skipped. If there is no number, 
the next page is displayed.

"""""

import keyboard

# file write
# with open("test.txt",'w',encoding = 'utf-8') as f:
#    f.write("my first file\n")
#    f.write("This file\n\n")
#    f.write("contains three lines\n")

# file read
with open('File.txt','r') as file:
    lines=file.readlines() 
    # print(lines)
# print(lines)

# converting to string from list
s=''
for i in lines:    
    s+=i
# print(s)

# split when "--" is found
res=s.split("--")
print(res)

# main operation

print("first:",res[0])
num='0'
# read key press
for i in range(1,len(res)):
    # print(res[i])
    i=i+int(num)    
    print(i)

    num=(input("enter a page number:" ))
    
    # if keyboard.read_key() == "enter":
    if (num.isdigit()):
        print(res[int(num)+i])
        # i=i+int(num)
        print(i)

    elif (num.isalpha()):
        print("[enter - read more, press q to quit]")   
        keyboard.read_key()
        if(keyboard.read_key() == "enter"):
            print(res[i])
        elif keyboard.read_key()=="q":
            print("quit")
            break
            # # else:
        # #     print("try again")