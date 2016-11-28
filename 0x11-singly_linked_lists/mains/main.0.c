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
    list_t *head;
    list_t *first, *second;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    first = malloc(sizeof(list_t));
    if (first == NULL)
    {
        printf("Error\n");
        return (1);
    }
    second = malloc(sizeof(list_t));
    if (second == NULL)
    {
        printf("Error\n");
        return (1);
    }
    first->str = strdup("Hello");
    first->len = strlen(first->str);
    first->next = head;
    head = first;
    second->str = strdup("WATER!");
    second->len = strlen(second->str);
    second->next = head;
    head = second;
    n = print_list(head);
    printf("-> %lu elements\n", n);
    free(first->str);
    free(first);
    return (0);
}
