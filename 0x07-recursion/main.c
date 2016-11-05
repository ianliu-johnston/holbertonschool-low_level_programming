#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("holberton");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}


/*
Write a function that returns 1 if a string is a palindrome and 0 if not.

    Prototype: int is_palindrome(char *s);

Expected Output:
1
1
0
1





int checker(char *str, int len, int count)
{
	if (*str != '\0' && count <= len)
	{
		printf("%s, %d\n", str, len);
		if (str[len - 1] == str[count])
			return (checker(str + 1, len - 1, count + 1));
		return (1);
	}
	return (0);
}
 */
