# module 11- Lab exam 01
# question 04 (complete)


"""""
4. Write a python program for the requirement below. Notice the output must be in sorted order -
Input  : x3b4U5i2
Output : bbbbiiUUUUUxxx

"""""
s=input("input:")
# separating chars and digits
digit=[]
char=[]
for c in s:
    # print(c)    
    if c.isdigit():
        c=int(c)
        digit.append(c)
    else:
        char.append(c)

# print(digit)
# print(char)
# print(type(digit[0]))
# print(type(char[0]))

# print according to digit elements
s=[]
for n in range(len(digit)):
    for d in range(digit[n]):
        #print( char[n],end="")
        s.append(char[n])

# print(s)

# print(len(s))
# print(s[3]>s[7]) # b> U
# print(s[3].lower()>s[7].lower()) # b>u

# comparison and rearrange
for i in range(len(s)):
    for j in range(i+1, len(s)):
        if s[i].lower()>s[j].lower():
            Character=s[i]
            s[i]=s[j]
            s[j]=Character
# print(s)

final=""
for c in s:
    final+=c
print(final)