# module 20.2
# CSV file import 

import csv
with open('./data/my_friends.csv','r') as file:
    lines=csv.reader(file)
    header=next(lines) # this will exclude the header
    for line in lines:
        print(line)
    print(header) # print only header
    