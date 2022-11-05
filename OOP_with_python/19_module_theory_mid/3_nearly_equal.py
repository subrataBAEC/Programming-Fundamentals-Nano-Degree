# module 19- Theory Mid Term
# Q no 3: string nearly equal (complete)

def nearly_equal(text1, text2):
    found_chars=[]
    for i in text1:
        for j in text2:
            if i==j:
                # print(i,j,end=" ")
                found_chars.append(i)
    # print(found_chars)
    # print(len(text1), len(found_chars))

    if len(text1)== len(found_chars):
        print(True)
    else:
        print(False)


# main()
nearly_equal('perl', 'pearl') 

nearly_equal('lpythoen', 'perl') 
