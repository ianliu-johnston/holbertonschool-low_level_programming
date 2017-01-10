#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	int i;
    dlistint_t *head;

	if (argc != 2)
	{
		printf("Usage: ./a.out <#>\n");
		return(1);
	}
    head = NULL;
	for (i = 0; i < 7; i++)
	{
		insert_dnodeint_at_index(&head, i, i);
	}
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, atoi(argv[1]), 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
