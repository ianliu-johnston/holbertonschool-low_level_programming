#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		printf("index: %d\n", index);
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	printf("Stopped at %d\n", index);
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
