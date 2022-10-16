# module 03 Lab
# clean data and find vowels from dirty data

data="auAfUsdeR/%OjkdIjfDF*#()sas"
data=data.lower()
print("lower:", data)
output_string=""
for c in data:
    #print(c)
    if (c=='a') or (c=='e') or (c=='i') or (c=='o') or (c=='u'):
        #print(f"{c} found") 
        output_string+=c+" " #concat to an empty string
print(output_string)