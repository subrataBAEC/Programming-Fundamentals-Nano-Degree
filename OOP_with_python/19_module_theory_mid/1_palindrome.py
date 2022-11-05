# module 19- Theory Mid Term
# Q no 1: check palindrome in python (complete)


def check_palindrome(text):
    rev_string=text[::-1]
    # print(rev_string)

    if text==rev_string:
        print("palindrom")
    else:
        print("not palindrome")

# main()
text="dppafappd"
check_palindrome(text)

text="python"
check_palindrome(text)