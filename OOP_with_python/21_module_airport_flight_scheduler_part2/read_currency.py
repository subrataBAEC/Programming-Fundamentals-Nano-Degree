# module 20.2; how to import csv file
# read currency rate csv

import csv

with open('./data/currencyrates.csv','r') as file:
    lines=csv.reader(file)
    for line in lines:
        # print(line)
        # find BDT, in 0th index
        if "Bangladeshi Taka" in line[0]:
            print(line)
            print(line[2], line[3])
            USD_to_BDT=float(line[3])
            BDT_to_USD=float(line[2])
            # print(f"50 USD to BDT{50*line[2]}")
            # print(f"5000 BDT to USD {50*line[2]}")

            

# convert 50 USD to BDT
print(USD_to_BDT * 50)
print(BDT_to_USD * 5000)

