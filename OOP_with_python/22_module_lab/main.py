# module 22: Lab class
"""
Activities:
read some file from source folder,
rename the file
save to destination
delete the file from source and server folder

"""
"""
folders:
creat 3 empty folders: destination, server, source
creat some.txt in source folder
main.py in server folder

after loading vs code:
ls: whats inside current directory
cd .\server\ :goes inside server directory
(then run:  main.py)
"""

import glob
import shutil
import os

source_path="../source/*"
destination_path="../destination"
postfix=[1,2,3]

while True:    
    source_object=glob.glob(source_path)
    # print(source_object) # gives a list whats inside source folder

    if len(source_object)>0:
        # copy some.txt from source to server using shutil.copy
        # '.' means, file will be copied to the same folder as main.py

        object_path=source_object[0] # this is a file path
        shutil.copy(object_path, '.') 

        # split object_path
        # print(object_path) # this is a string, split it
        object_name=object_path.split('\\')[-1].split(".")
        # print(object_name)
        prefix=object_name[0]
        postfix2=object_name[1]
        # print(prefix, postfix2)

        # make some_1.txt and make copies in serverl folder
        

        for item in range(len(postfix)):
            file_name=prefix+ "_"+ str(item)+ "."+ postfix2
            print(file_name)
            # shutil.copy(object_path, file_name) # copies to server folder
            shutil.copy(object_path, f"{destination_path}/{file_name}") # copies to destination folder

        os.remove(object_path) # remove file from source
        os.remove(object_path.split('\\')[-1])