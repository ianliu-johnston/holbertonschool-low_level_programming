#include "search_algos.h"
/**
  * main - define function
  * @void: describe argument
  * Return: 0 on success
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(!array)
		return (-1);
	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if(array[i] == value)
			return (i);
	}
	return (-1);
}
