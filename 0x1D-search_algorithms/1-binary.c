#include "search_algos.h"
/**
 * helper - recursive helper function for the binary search
 * @array: input array
 * @size: size of the array
 * @first: first value of the sub array
 * @last: last value of the sub array
 * @value: value to search for
 * Return: Index of value if found, -1 on if not found
(*
(* Add a small optimization with:
(* if(value == array[first]) return (first)
(* if(value == array[last]) return (last)
(*
 */
int helper(int *array, size_t size, size_t first, size_t last, int value)
{
	size_t i;

	printf("Searching in array: %d", array[first]);
	for (i = first + 1; i <= last; i++)
		printf(", %d", array[i]);
	putchar('\n');

	if (first >= last)
		return (-1);
	if (value == array[(first + last) / 2])
		return ((first + last) / 2);

	if (value < array[(first + last) / 2])
		return (helper(array, size, first, ((first + last) / 2), value));
	if (value > array[(first + last) / 2])
		return (helper(array, size, (first + last) / 2 + 1, last, value));
	return (-1);
}

/**
  * binary_search - binary search algorithm
  * @array: input array
  (* must sorted in ascending order
  * @size: size of the array
  * @value: value to search for
  * Return: Index of value if found, -1 on errors or not found
  */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (helper(array, size, 0, size - 1, value));
}
