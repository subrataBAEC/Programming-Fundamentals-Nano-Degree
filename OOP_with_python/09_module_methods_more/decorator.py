# decorator
import math

def timer(function):
    def inner(*args, **kwargs):
        print("time start")
        function(*args, **kwargs)
        print("time end")
    return inner

@timer
def get_factorial(n):
    res=math.factorial(n)
    print(f"factorial of {n} is:{res}")

# get_factorial(10)
# timer(get_factorial(5))
get_factorial(n=14)

