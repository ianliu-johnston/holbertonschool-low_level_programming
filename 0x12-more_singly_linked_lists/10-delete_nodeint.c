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
	listint_t *current, *tmp;

	printf("Entering\n");
	if (!*head)
	   	return (-1);
	printf("got in: the index here is %u\n", index);
	current = *head;
	while (index > 0)
	{
		current = current->next;
		printf("%04u\n", index);
		index--;
	}
	tmp = current->next->next;
	printf("Your value sir: %u, The next one is %u\n", current->n, current->next->n);
	printf("Shall I free it for you?");
	free (current->next);
	current->next = tmp;
	printf("Done. The next value is %u\n", current->next->n);
	return (1);
}
