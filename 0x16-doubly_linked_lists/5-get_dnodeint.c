#include "lists.h"
/**
  * *get_dnodeint_at_index - define function
  * @void: describe argument
  * Return: 0 on success
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for ( ; index > 0; index--)
		head = head->next;
	return (head);
}
