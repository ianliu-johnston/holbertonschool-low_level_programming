#!/usr/bin/python3

array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
print(array)
print("\n")
size = len(array)
for i in reversed(range(1, size)):
    for j in reversed(range(1, i)):
        a = array[j]
        b = array[int(j/2)]
        print("{:d} > {:d}: {:d}".format(a, b, a > b))
        if (a > b):
            array[j] = b
            array[int(j/2)] = a
            print(array)
    array[0], array[i] = array[i], array[0]
    print("{:d}: ".format(i), end="")
    print(array)


print(array)
print("\n")
