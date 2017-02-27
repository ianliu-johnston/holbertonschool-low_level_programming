#include "sort.h"
#include <stdio.h>
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * print_list_rev - Prints a doubly linkedd list of integers in reverse
 * @list: The list to be printed
 */
void print_list_rev(const listint_t *list)
{
	const listint_t *tail;

	printf("\x1b[31m");
	while(list)
	{
		tail = list;
		list = list->next;
	}
	while (tail)
	{
		if(tail->next)
			printf(", ");
		printf("%02d", tail->n);
		tail = tail->prev;
	}
	printf("\n\x1b[0m");
}
/**
 * printarr - Prints an array of integers
 * @list: The list to be printed
 */
void printarr(int array[], size_t i, size_t j)
{
	size_t n = 0;

	printf("\x1b[33m%02d: \x1b[0m", (int)i);
	while (array[n])
	{
		if (n > 0)
			printf(" ");
		if (n == i)
			printf("\x1b[31m%02d\x1b[0m", array[n]);
		else if (n == j)
			printf("\x1b[32m%02d\x1b[0m", array[n]);
		else
			printf("%02d", array[n]);
		n++;
	}
	printf("\n");
}

void insertion_sort_arr(int array[], size_t size)
{
	size_t i, j, tmp;

	i = j = 1;
	for (i = 1; i < size; i++)
	{
		/* Main Algorithm */
		for (j = i; j > 0 && array[j - 1] > array[j]; j--)
		{
			tmp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = tmp;
		}
		printarr(array, i, j);
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void insertion_main(int *array, size_t n)
{
    listint_t *list, *tmp;

    list = create_listint(array, n);
    if (!list)
        return;
    insertion_sort_list(&list);
	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}
