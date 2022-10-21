# module 11- Lab exam 01
# question 03 (complete)


"""""
3. Write a python program to reverse every word from a given string s and output a new string. The position of words will remain the same, but their contents will be in reverse order.

s = “Programming Hero is the best”

Expected output: “gnimmargorP oreH si eht tseb”

"""""

# s="Programming Hero is the best"
# s=s.split(" ")
s=input().split(" ")
# print(s) # list
res=[]
for word in s:
    # print(word)
    rev_word=word[::-1]
    # print(rev_word)
    res.append(rev_word)

# print(res)
rev=" ".join(res)
print(f"{rev}")
# for character in s[0]:
#     print(character)
