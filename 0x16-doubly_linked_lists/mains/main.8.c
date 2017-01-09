#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(int ac, char *av[])
{
    dlistint_t *head;
	if (ac != 2)
		printf("Error\n"), exit(1);
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
    delete_dnodeint_at_index(&head, atoi(av[1]));
    print_dlistint(head);
    return (0);
}
