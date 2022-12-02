# Theory Final Exam
# module 35 Question 6(in complete)

# python pattern

"""
When n=5,
12345
21345
23145
23415
23451

When n=7,
1234567
2134567
2314567
2341567
2345167
2345617
2345671

"""

n=5
# lst=[]
# for i in range(1,7):
#     lst.append([x for x in range(1, n+1)])
# print(lst)
lst=[x for x in range(1, n+1)]
print(lst)



lst1=[]
lst2=[]
# for i in range(0, n):
#     for j in range(0, n):
#         if i==j and j-1!=0:
#             # print(i, j)
#             # temp=lst[i]
#             print(i,j)
#             lst[j], lst[j-1]=lst[j-1], lst[j]
#             lst1.append(lst)
#     print(lst1, end=" ")
#     lst2.append(lst1[-1])
#     # for items in lst1[0]:
#     #     print(items, end=" ")
#     print()
# print(lst2)

# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if i==j:
#             print(1,end=" ")
#         print(j)
        
#     print()