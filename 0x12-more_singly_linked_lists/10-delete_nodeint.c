#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - deletes the node at the specified index
  * @head: describe argument
  * @index: node to delete
  * Return: 1 on successs, -1 on failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
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
	subsequent = current->next;
	while (index > 1 && subsequent)
	{
		current = current->next;
		subsequent = current->next;
		index--;
	}
	if (subsequent->next)
	{
		current->next = subsequent->next;
		free(subsequent);
	}
	else
		free(current);
	return (1);
}
