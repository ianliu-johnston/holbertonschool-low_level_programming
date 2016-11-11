#include <stdlib.h>
#include <stdio.h>
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
int *array_range(int min, int max)
{
	int *p;
	int absmin, absmax, i;

	if (min > max)
		return (NULL);
	absmin = _abs(min);
	absmax = _abs(max);
	if (absmin > absmax)
		p = malloc((absmin - absmax) * sizeof(int));
	else
		p = malloc((absmax - absmin) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < absmax; i++)
		p[i] = min + i;
	return (p);
}
