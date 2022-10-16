"""
module - 03.5 (partial completed)
practice - 05

Given two strings, s1 and s2. Write a program to create a new string s3 made of the 
first char of s1, then the last char of s2, Next, the second char of s1 and second last char of s2,
and so on. Any leftover chars go at the end of the result.
s1 = "Abc"
s2 = "Xyz"

Output : AzbycXd
"""

s1 = "Abc"
s2 = "Xyz"
out=""
rev_s2=""
for c in s2:
    rev_s2=c+rev_s2 #reverse
#print(rev_s2)

print(s1)
print(rev_s2)

for c in range(len(s1)):
    out=out+s1[c]+rev_s2[c]

print(out)