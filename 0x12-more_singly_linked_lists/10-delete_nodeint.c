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
		if ((*head)->next)
		{
			*head = (*head)->next;
			free (current);
			return(1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	while (index > 1 && current->next)
	{
		current = current->next;
		index--;
	}
	if (index >= 1)
		return (-1);
	subsequent = current->next;
	if (subsequent->next)
	{
		current->next = subsequent->next;
		free (subsequent);
	}
	else
	{
		current->next = NULL;
		free (subsequent);
	}
	return (1);
}
