# Module 06
# chat bot
"""
steps:
1. input/listen
2. process/decide
3. output/talkback
"""
from pkg_resources import split_sections


greet_words=['hi', 'hello', 'namaste']
bye_words=['bye', 'tata', 'take care']
bad_words=['dog', 'bad']

def listen():
    return input("say something: ")

def decide(command):
    print(command) # whole sentence
    command=command.lower() # make lower
    split_words=command.split(" ")
    #print(split_words)

    # access each word separately from split words
    for word in split_words:
        if word in greet_words:
            #print("welcome")
            talkback("welcome")
            break
        elif word in bye_words:
            #print("see you")
            talkback("see you")
            break

        elif word in bad_words:
            talkback("stop, right there!")
            break
    

def talkback(response):
    print(response)

while True:
    command = listen()
    # print(command)
    decide(command)



# hi there how are you
# bye see you soon