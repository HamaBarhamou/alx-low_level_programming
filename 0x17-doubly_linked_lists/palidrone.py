#!/usr/bin/python3

def check_palindrome(v):
    reverse = v[::-1]

    if (v == reverse):
        return True
    return False

pali = 0
for num in range(999*999 + 1):
    if check_palindrome(str(num)):
        pali = num

print(pali, end="")
