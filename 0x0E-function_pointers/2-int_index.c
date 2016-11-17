#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: pointer to the array
  * @size: size of the array
  * @cmp: pointer to the function
  * Return: index of the first element found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (array[++i])
	{
		if (cmp(array[i]) || cmp(array[0]))
			return (i);
	}
	return (-1);
}
