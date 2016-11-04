#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: first input string
 * @n2: second input string
 * @r: pointer to buffer where result is stored
 * @size_r: requested size for the buffer
 * Return: pointer to buffer where result is stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n, len1, len2; /* i = iterator, n = carry over number */

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;
	if (size_r >= len1 || size_r >= len2)
		if (len1 >= len2)
			i = j = len2 - 1;
		else
			i = j = len1 - 1;
	else
		i = j = size_r;	
	n = 0;
	/* if first number >= 10, set the value to 1 and increase the buffer by 1.*/
	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		j = 1;
	}

	while (i >= 0)
	{
		r[j] = (n1[i] - '0') + (n2[i] - '0') + n;
		if (r[j] >= 10)
		{
			r[j] %= 10;
			n = 1;
		}
		else
			n = 0;
		r[j] += '0';
		i--;
		j--;
	}
	r[size_r] = '\0';
	return (r);
}
