#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * free_list - frees a linked list
  * @head: the beginning of the list
  */
void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
