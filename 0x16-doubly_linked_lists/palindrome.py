#!/usr/bin/python3
set1 = [n for n in range(1, 1000)] 
set2 = set1
result = ""
palindromes = []
k = 0
for i in set1:
	for j in set2:
		if (i * j) > result and i * j != 0:
			result = i * j
			result = str(result)
for palcheck in result:
	palcheck = str(palcheck)
	length = round(len(palcheck)/2)
	a = palcheck[0:length]
	b = palcheck[length:]
	b = b[::-1]
	print(a, b)
	if a in b:
		palindromes.append(palcheck)
print(palindromes[-1])
