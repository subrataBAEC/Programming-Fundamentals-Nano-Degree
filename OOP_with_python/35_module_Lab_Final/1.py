# Theory Final Exam
# module 35 Question 1(complete)

# Key:aax Value: 5
# Key:aay Value: 6
# Key:aaz Value: 7

data={
    'a':[{
        'aa':{'aax':5,'aay':6,'aaz':7},
        'ab':{'abx':8,'aby':9,'abz':10}
        },
        {
        'aaa':{'aaax':11,'aaay':12,'aaaz':13},
        'aab':{'aabx':14,'aaby':15,'aabz':16}
        }],
    'b':[{
        'ba':{'bax':17,'bay':18,'baz':19},
        'bb':{'bbx':20,'bby':21,'bbz':22}
        },
        {
        'bba':{'bbax':23,'bbay':24,'bbaz':25},
        'bbb':{'bbbx':26,'bbby':27,'bbbz':28}
        }],
    'c':[{
        'ca':{'cax':29,'cay':30,'caz':31},
        'cb':{'cbx':32,'cby':33,'cbz':34}
        },
        {
        'cca':{'ccax':35,'ccay':36,'ccaz':37},
        'ccb':{'ccbx':38,'ccby':39,'ccbz':40}
        }]
}


list1=[]
for key, value in data.items():
    list1.append(value)
    # print(key, value)

list2=[]
for i in range(len(list1)):
    for j in range(len(list1[i])):
        # print(list1[i][j])
        list2.append(list1[i][j])

    # print(type(list1[j]))

list3=[]
for i in range(len(list2)):
    # print(type(list2[i]))

    for k, v in list2[i].items():
        # print(v)
        # print(type(v))
        for k1,v1 in v.items():
            # print(k1, v1)
            print(f"Key:{k1} Value: {v1}")
