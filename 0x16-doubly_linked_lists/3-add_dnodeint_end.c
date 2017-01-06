#include "lists.h"
/**
  * *add_dnodeint_end - define function
  * @void: describe argument
  * Return: 0 on success
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return(NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	tmp = *head;
	while(tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	tmp->prev = *head;
	return (*head);
}
