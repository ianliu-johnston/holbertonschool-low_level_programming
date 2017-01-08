#!/usr/bin/python3
def palcheck(num):
    number_string = str(num)
    length = round(len(number_string)/2)
    a = number_string[0:length]
    b = number_string[length:]
    b = b[::-1]
    if a in b:
        print(num)
        print(a, b[::-1])
        return 1
    else:
        return 0

result = 0
k = 0
for i in range(999, 101, -1):
    for j in range(999, 101, -1):
        if palcheck(i * j) == 1 and i * j > result:
            result = i * j
            print('{:d} * {:d} = {:d}'.format(i, j, i * j), "is a palindrome")
print(result)
