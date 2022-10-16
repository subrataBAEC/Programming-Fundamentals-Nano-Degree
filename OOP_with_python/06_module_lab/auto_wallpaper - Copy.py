# Module 06
# auto wallpaper download and set

from tkinter import image_names
from urllib import response

import pip._vendor.requests 
import requests
import json
import PyWallpaper


apu_url="https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# get the json
response=requests.get(apu_url)
print(response)
content=response.content
#print(content)
print(type(content)) # content is bytes type-convert to str

content=response.content.decode('UTF-8')  # content converted to string using decoding UTF-8

#print(content)
print(type(content)) # content is in string

# convert string to json
dict_content=json.loads(content)
#print(dict_content)
print(type(dict_content)) # content is in dict.

# get the image URL- using url key
image_url=dict_content['url']
print(image_url)

# download the image
res=requests.get(image_url)
#print(res)

# download the image
with open('image2.png', 'wb') as image:
    image.write(res.content)

# set wallpaper
PyWallpaper.change_wallpaper('E:\CSE funadamentals_phitron\Semester_2_course_1_OOP_with_Python\06_module_lab\image2.png')