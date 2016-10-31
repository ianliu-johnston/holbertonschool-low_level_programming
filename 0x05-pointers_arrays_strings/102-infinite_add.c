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
	/* i = iterator for n1 and n2; j = iterator for r; n = carry over number */
	int i, j, n;
	
	i = j = n = 0;
	/* if r[0] >= 10, set value to 1 & increase buffer size by 1*/
	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		j = 1;
	}
	while (i < size_r && (n1[i] != '\0' || n2[i] != '\0' || r[j] != '\0'))
	{
		if ((n1[i + 1] - '0') + (n2[i + 1] - '0') >= 10)
			n = 1;
		else
			n = 0;
		r[j] = (n1[i] - '0') + (n2[i] - '0') + n;
		r[j] = r[j] % 10 + '0';
/*		printf("i: %d, n1: %d, n2: %d, j: %d, r: %d\n", i, n1[i] - '0', n2[i] - '0', j, r[j]- '0'); debug*/
		i++;
		j++;
		if (n1[i] == '\0' || n2[i] == '\0')
			r[j] = '\0';
	}
	r[j] = '\0';
	return (r);
}
