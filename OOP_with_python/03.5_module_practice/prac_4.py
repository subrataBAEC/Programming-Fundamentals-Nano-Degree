"""
module - 03.5 (completed)
practice - 04

Count all uppercase, lowercase, digits, and special symbols from a given
"P@#yn26at^&i5ve"
Total counts of chars, digits, and symbols 

Uppercase = 1
Lowercase = 7 
Digits = 3 
Symbol = 4

"""
s = "P@#yn26at^&i5ve"
up = 0
low = 0
dig = 0
sp = 0
for c in s:
    if c >= 'A' and c <= 'Z':
        up += 1

    elif c >= 'a' and c <= 'z':
        low += 1

    elif c >= "0" and c <= "9":
        dig += 1

    else:
        sp += 1
print(up)
print(low)
print(dig)
print(sp)
