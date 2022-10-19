#cache, partial function, functools
# cache: can reduce the time using cache
from functools import cache
import time

@cache # this reduces time 
def fibonacchi(n):
    if n<=1:
        return 1
    return fibonacchi(n-1)+fibonacchi(n-2)


start=time.time()

for i in range(33):
    print(i, fibonacchi(i))

end=time.time()
print(f"time duration:{end-start}")


print()
print("partial function:")

from functools import partial
def get_number(a,b,c):
    return a*100+ b*10+ c*1

number=get_number(4,3,2)
print(number)

# only third values will be given, others are pre defined
third_only=partial(get_number, b=0, c=6)
number2=third_only(2)

print(number2)
