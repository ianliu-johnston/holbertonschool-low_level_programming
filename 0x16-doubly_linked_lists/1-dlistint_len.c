#include "lists.h"
/**
  * dlistint_len - Gets length of the list
  * @h: The head of the list
  * Return: Number of items in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
