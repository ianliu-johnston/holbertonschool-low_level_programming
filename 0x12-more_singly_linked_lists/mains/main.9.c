#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
    listint_t *head;

    head = NULL;
	for (i = 0; i <= 10; i++)
		add_nodeint_end(&head, i*16);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 8, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}

