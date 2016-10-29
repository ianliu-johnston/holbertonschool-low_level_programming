#include "holberton.h"
/**
 * infinite_add - prints a number
 * @n: Input number
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n; /* i = iterator, n = carry over number */
	
	n = 0;
	i = 0;
	while (r[i] != '\0' && n1[i] != '\0' && n2[i] != '\0')
	{
		r[i] = n1[i] + n2[i] + n; 
		if (r[i] >= 10)
		{
			r[i] = r[i] % 10;
			n++;
		}
		i++;
	}
	_putchar(size_r + '0');
	r[i] = '\0';
	return (r);
}
