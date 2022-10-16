# module 4

# try- exception- finally
try:
    num=10/4
    print(num)
except:
    print("not possible")
finally:
    print("done") # this executes always

# file handling- 
# file write
# 'w'- overwrites the previous sentence
# 'a'- appends with previous sentence
with open("save_text.txt",'w') as filewrite:
    filewrite.write("hello,this is file writing script. ")

with open("save_text.txt",'a') as filewrite:
    filewrite.write("another sentence to add")

# file read
with open("save_text.txt",'r') as filewrite:
    my_text=filewrite.read()
    print(my_text)

# file close- file read will not work after closing
filewrite.close()
# my_text=filewrite.read()
# print(my_text)

# method-2
# write
file = open("sample.txt", 'w')
file.write(" This text is sample text")

# read
file = open("sample.txt")
print(file.read())

# read and close
file = open("sample.txt")
print(file.read())
# file.close()
 
# Attempt to write in the file
file.write(" Attempt to write on a closed file !")

