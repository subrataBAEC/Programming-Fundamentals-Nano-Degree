# module 19- Theory Mid Term
# Q no 9: book page skip forwand and backward (complete)


"""""
Further extend the book reader so that it can accept negative numbers for skipping pages. 
Entering -1 should go back to the previous page. There are many ways to achieve this.

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
# for w in res:    


    print(res[i])
    num=input("Enter a page number to open(forward and backward), press enter for next page, q to quit: ")
    # print(num, type(num)) # num- string class
    


    if num=='q': # for quit
        print("quit")
        break

    elif num=="": # for enter
        i=i+1
        # print("e", i)

    elif num.isdigit(): # for pos
        num=int(num)
        # print(num, type(num)) # num- int
        # print(res[num])
        i=num+i
        # print("p", i)



    else: # for negative
        # print(i, res[i+1]) # type string
        num=int(num)
        i=num+i
        # print("n", i)