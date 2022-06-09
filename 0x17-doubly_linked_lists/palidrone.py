#!/usr/bin/python3

def check_palindrome(v):
    reverse = v[::-1]

    if (v == reverse):
        return True
    return False

pali = 0
for i in range(1000):
    for j in range(1000):
        if check_palindrome(str(i * j)):
            pali = i * j

print(pali, end="")
