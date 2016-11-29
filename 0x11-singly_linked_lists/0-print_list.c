#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	int i;
	list_t *head;

	if (h == NULL)
		return (1);
	head = malloc(sizeof(list_t));
	if (head == NULL)
		return (1);
	*head = *h;
	for (i = 0; head; i++)
	{
		printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	free(head);
	return (i);
}
