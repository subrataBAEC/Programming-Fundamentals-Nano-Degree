"""
module - 03.5 (Partially completed)
practice - 01
You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.(don’t use any python built in function)
Example :  pHitrOn.iO presents "Python COuRSe".
Ans : PhITRoN.Io PRENSENTS “pYTHON coUrsE”
"""
"""
s="Python COuRSe"
new=""
for c in s:
    if c >='A' and c<='Z':
        val=ord(c)
        val+=32
        new+=chr(val)
    elif c >='a' and c<='z':
        val=ord(c)
        val-=32
        new+=chr(val)

        # new+=c
    else:
        new+=c
        
print(new)

"""
# s = "Python COuRSe"
# new = ""
# for i in range(len(s)):
#     # print(s[i])
#     if c >= 'A' and c <= 'Z':
#         s[i]+32
#         new += chr(val)
#     elif c >= 'a' and c <= 'z':
#         val = ord(c)
#         val -= 32
#         new += chr(val)

#         # new+=c
#     else:
#         new += c


