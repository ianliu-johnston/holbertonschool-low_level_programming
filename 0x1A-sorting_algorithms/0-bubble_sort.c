#include "sort.h"

/**
 * swap - swap array elements
 * @xp: ptr to array element
 * @yp: prt to array element
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - sort an array of integers asending order
 * @array: input array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char isSorted;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		isSorted = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				isSorted = 0;
				print_array(array, size);
			}
		}
		/* if no two elements were swapped by inner loop, then break */
		if (isSorted == 1)
			break;
	}
}
