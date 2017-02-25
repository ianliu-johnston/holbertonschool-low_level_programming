#include "sort.h"

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
		print_list(*list);
		/*
		print_list_rev(*list, i, j);
		*/
	}
}
