# Module 07
# Q 06 (complete)

# tutorial : 
"""
def clean_string(text):
    ....
    ....
    print(output)
    
s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)

"""
# function
def clean_string(text):
    #text=text.lower()
    clean_data="" # empty container

    for char in text:
        if (char>='a' and char<='z') or (char>='A' and char<='Z'):
            clean_data=clean_data+char

    # print(text)
    # print(clean_data)
    return clean_data


# main
s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)
