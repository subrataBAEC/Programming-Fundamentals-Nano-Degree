# module 19- Theory Mid Term
# Q no 8: book page skip forward (complete)

"""""
Extend the previous challenge so that it is possible to skip forward by an arbitrary number of pages.
This should be achieved by allowing the user to enter a number before pressing the enter key.
If the number is positive, the given number of pages are skipped. If there is no number, 
the next page is displayed.

"""""

with open('File.txt','r') as file:
    lines=file.readlines() 

# converting to string from list
s=''
for i in lines:    
    s+=i
# print(s)

# split when "--" is found
res=s.split("--")
# print(res)

# main operation
i=0
while True:
    print(res[i])
    num=input("Enter a page number to open(forward), press enter for next page, q to quit: ")
    # print(num, type(num)) # num- string class

    if num=="q":
        print("quit")
        break
    
    elif num.isdigit():
        num=int(num)
        # print(num, type(num)) # num- int
        # print(res[num])
        i=num+i
    else:
        # print(i, res[i+1]) # type string
        i=i+1