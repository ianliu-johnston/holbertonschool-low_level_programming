#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * print_list - finds number of elements in a linked list
  * @h: singly linked list to print
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
