#include "lists.h"
/**
  * add_dnodeint - Adds a node to the beginning of a doubly linked list
  * @head: head of the linked list
  * @n: value to add to the list
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
