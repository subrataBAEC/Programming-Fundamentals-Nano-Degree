"""
module - 03.5 (in completed)
practice - 06

Write a program to check if one string contains another. For example, the result will be True if all the characters in the s1 are present in s2, otherwise False. The character’s position doesn’t matter. Take inputs from the user.

s1 = "Phi"
s2 = "Phitron"

Output : True
"""

s1 = "Phi"
s2 = "Phitron"
flag=1

for i in range(len(s2)):
    for j in range(len(s1)):
        if s2[i]!=s1[j]:
            flag=0

if flag==0:
    print("False")
if flag==1:
    