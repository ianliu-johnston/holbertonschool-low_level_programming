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
    listint_t *head;
	int i, status;

    head = NULL;
	for (i = 0; i < 4; i++)
		add_nodeint_end(&head, i);
	printf("The original list:\n");
	print_listint(head);
	printf("-----------------\n");
	status = delete_nodeint_at_index(&head, 1);
	print_listint(head);
	printf("--------(%d)---------\n", status);
	for ( i = 0; i < 5; i++)
	{
		printf("poping head off\n");
		status = delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("--------(%d)---------\n", status);
	}
    print_listint(head);
    return (0);
}
