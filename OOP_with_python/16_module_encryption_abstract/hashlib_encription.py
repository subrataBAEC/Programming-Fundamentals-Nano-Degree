# Module 16-1
# Hash library to Encrypt

import hashlib
# creat account
email='abc@gmail,com'
password="12345"
password_encode=password.encode()
password_hash=hashlib.md5(password_encode).hexdigest()
print(password_hash) # 827ccb0eea8a706c4c34a16891f84e7b
# This is saved in DB

# login and verify right user
login_email='abc@gmail,com'
login_password="12345"

hashed_pass=hashlib.md5(login_password.encode()).hexdigest()
print(hashed_pass)

if email==login_email and password_hash==hashed_pass:
    print("right user")
else:
    print("wrong user")


