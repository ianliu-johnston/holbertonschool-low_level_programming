#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * array_iterator - executes a function on each element of an array
  * @array: input array
  * @size: size of the array
  * @action: pointer to the function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		action(array[i]);
		while (++i < size)
			action(array[i]);
	}
}
