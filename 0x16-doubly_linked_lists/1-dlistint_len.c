#include "lists.h"
/**
  * dlistint_len - define function
  * @void: describe argument
  * Return: 0 on success
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
