# function as parameter
# return a function from another function

print("function as parameter:")
print("------------------------")

def do_something(func_work):
    print("start the work")
    # print(work)
    func_work() # function call
    print("end of the work")

def practice_code():
    print("practicing python")

def practice_cooking():
    print("practicing cooking")

# do_something("122")
do_something(practice_code) # function as parameter
print()
do_something(practice_cooking)

print()
print("function inside a function and return a function: ")
print("------------------------")

def nested_function():
    print("this is outer function")
    def inner_function():
        print("this is inner function")
    # inner_function()
    return inner_function

res=nested_function()
res()
# alternate method 
# nested_function()() 