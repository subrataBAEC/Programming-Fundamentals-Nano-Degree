# module 11- Lab exam 01
# question 06 (complete)

"""""
def func(arg1, arg2, arg3=4, arg4=5):
    print(arg1, arg2, arg3, arg4)
"""""

def func(arg1, arg2, arg3=4, arg4=5):
    print(arg1, arg2, arg3, arg4)

func(6, 7)
func(4, 5, arg3=6)
func() #error func() missing 2 required positional arguments: 'arg1' and 'arg2'
func(3, 4, arg2=1) #func() got multiple values for argument 'arg2'