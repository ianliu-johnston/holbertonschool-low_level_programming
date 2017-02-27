#include "sort.h"
/**
 * get_head - gets the head of the list
 * @list: the list
 * Return: the head of the list
 */
listint_t *get_head(listint_t *list)
{
	listint_t *tmp;

	tmp = list;
	while (tmp->prev)
		tmp = tmp->prev;
	return (tmp);
}
/**
 * swap_dll - swaps nodes in a linked list
 * @left: left node
 * @right: right node
 * Return: status
 */
int swap_dll(listint_t *left, listint_t *right)
{
	if (!left || !right)
		return (EXIT_FAILURE);
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
	return (EXIT_SUCCESS);
}
/**
  * insertion_sort_list - insertion sort algorithm
  * @list: Linked list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	unsigned int big_savespot, small_savespot, i, stat;
	listint_t *big_step, *small_step;

	big_step = small_step = *list;
	big_savespot = small_savespot = i = 0;
	if (!list || !*list)
		return;
	while (big_step)
	{
		small_step = big_step;
		small_savespot = big_savespot;
		while (small_step->prev && small_step->n < (small_step->prev)->n)
		{
			stat = swap_dll(small_step->prev, small_step);
			if (stat == 1)
				return;
			small_step = get_head(*list);
			for (i = 0; i < small_savespot; i++)
				small_step = small_step->next;

			small_step = small_step->prev;
			small_savespot--;
			print_list(get_head(*list));
		}
		big_step = get_head(*list);
		for (i = 0; i < big_savespot; i++)
			big_step = big_step->next;
		big_savespot++;
		big_step = big_step->next;
	}
	*list = get_head(*list);
}
