import keyboard

w=[1,2,3,4,5]

for i in w:
    print(i)
    num=keyboard.read_key()
    # print(type(num))

    if num.isdigit():

        print("digit")
        num=int(num)
        print(type(num))

    else:
        if(num == "enter"):
            print("enter")
            print(type(num))

        else:
            print(num)
            print(type(num))

    # keyboard.wait("enter")
    

