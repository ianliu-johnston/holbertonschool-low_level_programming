#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - prints a number
 * @n: Input number
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n; /* i = iterator, n = carry over number */
	i = size_r;	
	n = 0;
	while (i >= 0)
	{
		r[i] = (n1[i] - '0') + (n2[i] - '0') + n;
		if (r[i] >= 10&& i != 0)
		{
			r[i] = r[i] % 10;
			n = 1;
		}
		else
			n = 0;
		printf("counter: %d, n1: %d, n2: %d, result: %d\n", i, n1[i] - '0', n2[i] - '0', r[i]);
		r[i] += '0';
		i--;
	}
	r[i] = '\0';
	return (r);
}
