#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * print_array - prints an array of integers
 *
 * @array: the array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(" ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
