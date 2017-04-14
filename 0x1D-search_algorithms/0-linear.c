#include "search_algos.h"
/**
  * linear_search - simplest search algorithm
  * @array: input array
  * @size: size of the array
  * @value: value to search for
  * Return: Index of value if found, -1 on errors
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
