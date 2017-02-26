#include "sort.h"

/**
  * insertion_sort_list - insertion sort algorithm
  * @list: Linked list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *big_step, *small_step, *right_slide;

	if (!*list || !list)
		return;
	big_step = small_step = *list;
	/* Start at the second node */
	big_step = big_step->next;
	while (big_step->next)
	{
		small_step = big_step;
		while (small_step->prev && (small_step->prev)->n > small_step->n)
		{
			right_slide = small_step;
			small_step = small_step->prev;

			if (small_step->prev)
				small_step->prev->next = right_slide;
			if (right_slide->next)
				right_slide->next->prev = small_step;

			small_step->next = right_slide->next;
			right_slide->prev = small_step->prev;
			small_step->prev = right_slide;
			right_slide->next = small_step;

			if (right_slide->prev)
				small_step = right_slide->prev;
			print_list(*list);
		}
		big_step = big_step->next;
		print_list(*list);
	}
}
