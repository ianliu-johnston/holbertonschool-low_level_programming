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
    dlistint_t *head;

	if (argc != 2)
	{
		printf("Usage: ./a.out <#>\n");
		return(1);
	}
    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 5);
    add_dnodeint_end(&head, 6);
    add_dnodeint_end(&head, 7);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, atoi(argv[1]), 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
