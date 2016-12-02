#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return(NULL);
	current = *head;
	subsequent = malloc(sizeof(listint_t));
	if (subsequent == NULL)
		return (NULL);
	subsequent->n = n;
	i = 0;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	subsequent->next = current->next;
	current->next = subsequent;
	return (*head);
}
