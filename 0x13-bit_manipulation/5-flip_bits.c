#include "holberton.h"
#include <stdio.h>
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @void: describe argument
  * Return: 0 on success
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int expo;
	unsigned int res, i;

	if (n == m)
		return (0);
	for (expo = 1, i = res = 0; expo < (n ^ m); expo *= 2, i++)
	{
		if ((n ^ m) & (1 << i))
			res++;
	}
	return (res);
}
