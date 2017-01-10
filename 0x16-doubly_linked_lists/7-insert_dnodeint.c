#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @h: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idx_cp;
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	idx_cp = idx;
	tmp = *h;
	if (!tmp)
	{
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && tmp->next; idx--)
		tmp = tmp->next;

	if (idx_cp > idx && !tmp->next)
		return (NULL);

	new->prev = tmp;
	new->next = tmp->next ? tmp->next : NULL;
	tmp->next = tmp->next && idx > 1 ? NULL : new;
	return (new);
}
