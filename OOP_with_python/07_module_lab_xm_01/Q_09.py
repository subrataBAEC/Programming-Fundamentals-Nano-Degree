# Module 07
# Q 09 (complete)

# tutorial : 
"""
You need to make a positive story into a negative by changing some of its words automatically. Someone gave you a list `replace with’ and asked to find the words that are in that list in string ‘s’ and replace them with the next word of that list.

replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


Output example (one done for you): 
"I am the thief of Baghdad..........."


Write a function named replace_word() and write your code inside this function.

"""
# function def
def replace_word(s):

    res=s.split() # list
    # res=str(res)
    # print(res[10])

    for i in range(len(res)):
        for w in range(len(replace_with)-1):
            if res[i]==replace_with[w]:
                # print(res[i], replace_with[w+1]) 
                res[i]=replace_with[w+1]
                break             
    # print(res)
    str(res)   
    # print(res)

    # join words to make a sentence
    new=""
    for i in res:
        new+=i+" "
    print(new)

# main
replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]
s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."
# print(s)
replace_word(s)
