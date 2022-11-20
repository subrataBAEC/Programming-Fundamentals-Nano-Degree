"""
module 28: Intro to ML
use requests module to extract online data
use bs4 to extract table
data cleaning
ignore duplicate values
write to csv

"""

import requests
from bs4 import BeautifulSoup
import re
import csv

url="https://en.wikipedia.org/wiki/IPhone"
text=requests.get(url).text
# print(text)
soup=BeautifulSoup(text,'lxml')
table=soup.find('table', class_='wikitable')
# print(len(table))
# print(table)
# find rows
rows=table.find_all('tr')[1:] # ignoring  first row
# print(rows)
iphone_price_dict={}

# find model from each row
for row in rows:
    data=row.find_all(['th','td'])
    try:
        # print(data[0].a.text.split(" ")) # iphone model names
        # print(data[0].a.text.split(" ")[1]) # iphone model version
        # print(data[-1]) # iphone prices
        
        version_text=data[0].a.text.split(" ")[1]
        version=re.sub(r"\D","",version_text) 
        version=int(version)
        # print(version)
        price_text=data[-1].text.split("/")[-1]
        price=re.sub(r"\D","",price_text)
        
        # discard missing values and consider prices more than 100
        price=int(price)

        if version and price>100:
            # print(version, price)
            iphone_price_dict[version]=price # removes duplicate values

    except:
        pass

print(iphone_price_dict)
csv_fields=['version', 'price']

with open('iphone_model_price.csv', 'w', newline='') as csvFile:
    csvwriter=csv.writer(csvFile)
    csvwriter.writerow(csv_fields)
    for key, value in iphone_price_dict.items():
        csvwriter.writerow([key,value])
    csvFile.close()