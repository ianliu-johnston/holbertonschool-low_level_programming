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
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
