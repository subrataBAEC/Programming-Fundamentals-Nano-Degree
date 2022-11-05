# module 19- Theory Mid Term
# Q no 7: book keyboar input (complete)

"""""
Write a program to display a simple form of digital book. “Books” are text files in 
which each block (page) of text is followed by a double dash (--). When a book is displayed, 
the first block of text is shown and the program should wait for the user to press the enter key 
before displaying the next.

File.txt:
This is first page content--Now we are in the second pageq

Output:
This is first page content
[enter - read more, press q to quit]

1. keyboard প্যাকেজ টি ইন্সটল করা না থাকলে ইন্সটল করে নিন।
2. key রিড করার জন্য সিনট্যাক্স :
keyboard.read_key()
3. key রিড করার পর if কন্ডিশন দিয়ে চেক করতে পারেন।

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
# print(res)

# read key press
for w in res:
    print(w)
    print("[enter - read more, press q to quit]")
    # if keyboard.read_key() == "enter":
    keyboard.read_key() # user key press
    if keyboard.read_key() == "enter":
        continue
    else:
        print("quit")
        break