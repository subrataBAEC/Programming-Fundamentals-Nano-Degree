# Module 07
# Q 07 (complete)

# tutorial : 
"""
Complete the following code (without using the replace function)-

def replace_comma_with_space(text):
    …
    …

s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
"""

# function
def replace_comma_with_space(text):

    new_string=""

    for c in text:
        #print(c, end="")
        if c==',': 
            c=" " # replacing here
        new_string+=c

    #print(new_string)
    return new_string

# main
s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)