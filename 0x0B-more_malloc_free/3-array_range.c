#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for ( ; min < max; min++)
		p[min] = min;
	return (p);
}
