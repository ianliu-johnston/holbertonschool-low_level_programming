#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 11);
    add_dnodeint_end(&head, 21);
    add_dnodeint_end(&head, 31);
    add_dnodeint_end(&head, 41);
    add_dnodeint_end(&head, 51);
    add_dnodeint_end(&head, 61);
    add_dnodeint_end(&head, 71);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 7);
	if (node)
		printf("-----\n%d\n", node->n);
	else
		printf("Could not access index\n");
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
