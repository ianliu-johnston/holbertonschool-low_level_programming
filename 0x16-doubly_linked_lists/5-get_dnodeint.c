#include "lists.h"
/**
  * *get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!*head)
		return (NULL);
	for ( ; index > 0; index--)
		head = head->next;
	return (head);
}
