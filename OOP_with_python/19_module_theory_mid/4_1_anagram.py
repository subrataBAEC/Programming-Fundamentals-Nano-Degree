

def anagrams(list_s):
    res=[]
    # # print(list)
    # for i in list_s:
    #     # print(sorted(i))
    #     res.append(sorted(i))
    # print(res)

    index=0

    for i in range(len(list_s)):
        # print(i)
        # j=i+1
        for j in range(i+1, len(list_s)):
            if sorted(list_s[i].lower())==sorted(list_s[j].lower()):
                print(index, list_s[i], list_s[j] )
                
                
        index+=1



# main()
list_s=['eat', 'ate', 'done', 'tea', 'soup', 'node']
res=anagrams(list_s) 
print(res)
