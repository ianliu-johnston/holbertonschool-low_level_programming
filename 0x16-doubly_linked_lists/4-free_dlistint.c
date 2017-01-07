#include "lists.h"
/**
  * free_dlistint - define function
  * @void: describe argument
  * Return: 0 on success
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while(head)
	{
		tmp = head;
		head = head->next;
		tmp->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
}
