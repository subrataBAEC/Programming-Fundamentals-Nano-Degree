# module 19- Theory Mid Term
# Q no 4: anagram (in complete)

"""""
Write a program to find anagrams in a given list of words. Two words are called anagrams 
if one word can be formed by rearranging letters of another. 
For example ‘eat’, ‘ate’ and ‘tea’ are anagrams.
>>> anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node']) 
[['eat', 'ate', 'tea], ['done', 'node'], ['soup']]

"""""

def anagrams(list_s):
    anagrams_list={}

    for s in list_s:
        # print(s)
        sorted_s=str(sorted(s)).lower()
    
        print(sorted_s)
        # print(sorted_s, s)
        if sorted_s in anagrams_list:
            anagrams_list[sorted_s].append(s)
        else:
            anagrams_list[sorted_s]=[s]
    # print((anagrams_list.values()))
    # return list(anagrams_list.values())
    
    
    # print(anagrams_list)




# main()
list_s=['eat', 'ate', 'done', 'tea', 'soup', 'node']
res=anagrams(list_s) 
print(res)


# def anagrams(list):
#     s=[]
#     # print(list)
#     for i in list:
#         # print(sorted(i))
#         s.append(sorted(i))
#     print(s)

#     for i in s:
#         index=0
#         # print(i)
#         for j in s:
#             if i==j:
#                 print(i, j, index )
#                 break
#     index+=1
        