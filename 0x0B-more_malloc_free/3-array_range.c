#include <stdlib.h>
/**
  * _abs - get absolute value
  * @n: number to calculate
  * Return: absolute value of the number
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *p;
	int absmin, absmax, range, i;

	if (min > max)
		return (NULL);
	absmin = _abs(min);
	absmax = _abs(max);
	absmin > absmax ? (range = absmin - absmax) : (range = absmax - absmin);
	p = malloc(range * sizeof(int) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= range; i++)
		p[i] = min + i;
	return (p);
}
