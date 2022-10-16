# Module 07
# Q 03 (complete)

"""
Go to this repo: https://pypi.org/project/pyjokes/ and try to make a chat bot to tell you joke using pyjokes.

Write a function named tell_some_jokes() and write your code inside this function.

"""

# modules
import pyjokes


# def listen():
#     return input("wanna hear a joke?: (type y) ")

def tell_some_jokes(answer):
    
    if answer=='y':
        print(pyjokes.get_joke())
    else:
        print('try again')

# main function
while True:
    
    answer=input("wanna hear a joke?: (y=yes, n=quit) ")
    answer=answer.lower()
    if answer=='n':
        break
    tell_some_jokes(answer)
