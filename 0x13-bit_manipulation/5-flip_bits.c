#include "holberton.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int expo;
	unsigned int res, i;

	res = 0;
	for (expo = 1, i = 0; expo <= (n ^ m); expo *= 2, i++)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
