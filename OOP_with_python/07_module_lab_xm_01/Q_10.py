# Module 07
# Q 10 (complete)

# tutorial : 
"""
Given a string ‘s’ you need to find the words that are in list ‘a’ and use the next words on string ‘s’ to create a new string. Save it inside a file called ‘out.txt’. Remember to close the file after writing.

Write a function named create_new_string() and write your code inside this function.

a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

output = "I love Bangladesh" (inside a file)


"""

# function
def create_new_string(s,a):

    # print(type(s))
    s = s.replace(',', '') # remove comma from oh,
    s = s.replace('.', '') # remove . from the end,
    # print(s)

    # for i in range(len(a)):
    #     a[i]=a[i].lower()

    # s=s.lower() # lowering
    s=s.split() # make a list
    # print(type(s))
    # print(a)
    # print(s)

    new_list=[]
    for i in range(len(s)):
        # print(s[i])
        for l in range(len(a)):
            if s[i].lower()==a[l].lower():
                # print(s[i],a[l])
                new_list.append(s[i+1])
                break

    # print(new_list)

    new=""
    for i in range(len(new_list)):
        if i==2:
            continue        
        else:
            new+=new_list[i]+" "
    print(new)

    # file write 
    file=open("out.txt",'w')
    file.write(new)

    # file read and close
    file=open("out.txt")
    # print(file.read())
    file.close()

# main
a = ['oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."


create_new_string(s,a)
