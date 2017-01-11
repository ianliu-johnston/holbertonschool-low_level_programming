#include <stdlib.h>
#include <stdio.h>
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
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
		p[i] = min;
	return (p);
}
