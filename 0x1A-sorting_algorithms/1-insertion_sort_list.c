#include "sort.h"
/**
 * print_list_rev - Prints a doubly linkedd list of integers in reverse
 * @list: The list to be printed
 */
void print_list_rev(const listint_t *list, int i, int j)
{
	int n = 0;
	const listint_t *tail;

	while(list)
	{
		tail = list;
		list = list->next;
		n++;
	}
	printf("\x1b[33m%02d: \x1b[0m", i);
	while (tail)
	{
		if (tail->next)
			printf(" ");
		if (n == i)
			printf("\x1b[31m%02d\x1b[0m", tail->n);
		else if (n == j)
			printf("\x1b[32m%02d\x1b[0m", tail->n);
		else
			printf("%02d", tail->n);
		tail = tail->prev;
		n--;
	}
	printf("\n");
}
/**
 * print_list2 - Prints a list of integers
 * @list: The list to be printed
 */
void print_list2(const listint_t *list, int i, int j)
{
	int n = 0;

	printf("\x1b[33m%02d: \x1b[0m", i);
	while (list)
	{
		if (n > 0)
			printf(" ");
		if (n == i)
			printf("\x1b[31m%02d\x1b[0m", list->n);
		else if (n == j)
			printf("\x1b[32m%02d\x1b[0m", list->n);
		else
			printf("%02d", list->n);
		list = list->next;
		n++;
	}
	printf("\n");
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
  * insertion_sort_list - insertion sort algorithm
  * @list: Linked list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	int i, j;
	listint_t *head, *walk, *swap;

	i = j = 0;
	head = *list;
	/* Start at the second node */
	head = head->next;
	while (head->next)
	{
		walk = head;
		j = i;
		while (j > 0 && walk->prev && (walk->prev)->n > walk->n)
		{
			/*
		printf("\x1b[35m%02d BEFORE: walk = %d, swap = %d, head = %d\n\x1b[0m", i, walk->n, swap->n, head->n);
		*/
			swap = walk;
			walk = walk->prev;
			if (walk->prev)
				walk->prev->next = swap;
			if (swap->next)
				swap->next->prev = walk;
			walk->next = swap->next;
			swap->prev = walk->prev;
			walk->prev = swap;
			swap->next = walk;
			if (swap->prev)
				walk = swap->prev;
			j--;
			print_list2(*list, i, j);
		/*
		printf("\x1b[35m%02d AFTER: walk = %d, swap = %d, head = %d\n\x1b[0m", i, walk->n, swap->n, head->n);
		*/
		}
		i++;
		head = head->next;
		print_list2(*list, i, j);
		/*
		print_list_rev(*list, i, j);
		*/
	}
}
