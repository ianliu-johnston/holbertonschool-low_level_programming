#include "lists.h"
/**
  * print_dlistint - define function
  * @void: describe argument
  * Return: 0 on success
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
