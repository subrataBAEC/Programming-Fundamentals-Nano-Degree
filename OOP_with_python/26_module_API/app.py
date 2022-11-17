# A simple Web API using FLASK
# C R U D= creat/Add, read, update, delete

"""
A short intro to FLASK API
1. Show information from the Database(Dictionary)
2. Show only the desired info. from the Database(Dictionary)
3. Add new info. in the Database(Dictionary) and exception handling
4. Delete info. from the Database(Dictionary) and exception handling
"""
"""
instructions:
 1. file name must be app.py
 2. use flask run in command terminal
"""

# save this as app.py
from flask import Flask, request

app = Flask(__name__)
database={"subrata": "100", "putin":300, "zelensky":122}

"""show home page"""
# http://127.0.0.1:5000/home/
@app.route("/home/", methods=['GET'])
def home():
    return "welcome to my home page"
    # return '12' # works in string format

"""show whole database"""
# http://127.0.0.1:5000/getdata/
@app.route("/getdata/",methods=["GET"]) # browser: http://127.0.0.1:5000/getdata
def get_data():
    return database

""" show only the desired user """
#api/getuser/?user=name
@app.route("/getuser/",methods=["GET"])
def get_user_data():
    key, value=list(request.args.items())[0]
    print(list(request.args.items())) # a list with one element
    print(key, value)
    
    if value in database.keys():
        return f"{value}, {database[value]}" # dict[key]=value
    else:
        return "invalid user"    

""" add new info DB, if already exists, show- name already exists """
# http://127.0.0.1:5000/adddata/?rahim=222
@app.route("/adddata/", methods=['GET','PUT'])
def add_data():
    key, value=list(request.args.items())[0]
    print(key, value) # notice this, which is key and value

    # check if exists in database
    # Note: search value(=name) in keys()
    if key not in database.keys(): 
        database[key]=value # add the user
        return f"{key} addedd"
    else:
        return "name already exist"

"""delete data from DB"""
# api/deletedata?user=name (ex. user=putin)
@app.route('/deletedata/',methods=['GET','DELETE'])
def delete_data():
    key, value=list(request.args.items())[0]
    print(key, value) # notice this, which is key and value
    
    # check if exists in database
    # Note: search value=name in keys()
    if value in database.keys(): 
        database.pop(value) # delete the value
        return f"{value} deleted"
    else:
        return "name desn not exist"

if __name__ == '_main__':
    app.run()
