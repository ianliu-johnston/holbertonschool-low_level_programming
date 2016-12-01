#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = current = *head;
	*head ? (i  = current->n) : (i = 0);
	*head = current->next;
	free(tmp);
	return (i);
}
