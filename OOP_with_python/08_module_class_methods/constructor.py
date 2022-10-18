# module 08
# constructor

class Phone:
    # attributes
    country="china"
    category="smart phone"
    
    # constructor
    def __init__(self, brand, price, color): # this method name and syntax is fixed 
        self.brand=brand
        self.price=price
        self.color=color

    # def __init__(self, camera_pix, GPS): 
    #     self.camer_pix=camera_pix
    #     self.GPS=GPS

    # method
    def send_sms(self,text,num):
        sms=f"send this sms:{text} to {num}"
        return sms

# creat objects-my_phone
my_phone=Phone(price='20000', brand="nokia",color='black')
print(my_phone.color)
sms=my_phone.send_sms("hello", "23456")
print(sms)
print(my_phone.category)

# my_phone=Phone(GPS='yes', camera_pix='15')
# print(my_phone.camer_pix)
# print(my_phone.GPS)


# creat objects-her_phone
her_phone=Phone("samsung", '25000', 'white')
print(her_phone.color)
print(her_phone.price)
print(her_phone.category)



