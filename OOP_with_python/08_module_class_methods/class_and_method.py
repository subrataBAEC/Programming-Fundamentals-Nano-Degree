# module 08
# class and method- introduction

from msilib.schema import Condition


class Phone: # class
    brand="xiaomi" # attributes
    price= 18000
    Condition=['good','running',8]

    # methods
    def call(self):
        print("ring ring")

    def send_sms(self, number, text):
        sms=f'sending sms to:{number}, text is:{text}'
        return sms

# creat objects-my_phone
my_phone=Phone()
print(my_phone.brand)
print(my_phone.Condition)

# creat objects-her_phone
her_phone=Phone()
print(her_phone.brand)
print(her_phone.price)
her_phone.call()
sms=her_phone.send_sms("12345", "hello")
print(sms)





    