#include "lists.h"
/**
  * *insert_dnodeint_at_index - define function
  * @void: describe argument
  * Return: 0 on success
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	tmp = *head;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		*head = new;
		return (*head);
	}
	for ( ; idx > 0 && tmp->next; idx--)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = tmp->next ? tmp->next : NULL;
	tmp->next = tmp->next ? new : NULL;
	return (new);
}
