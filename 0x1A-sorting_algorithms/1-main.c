#include "sort.h"
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

void print_list_rev(const listint_t *list, int i, int j);
void insertion_sort_arr(int array[], size_t size);
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int insertion_main(int *array, size_t n)
{
    listint_t *list;

    list = create_listint(array, n);
    if (!list)
        return (EXIT_FAILURE);
	printf("START: ");
    print_list(list);
	print_list_rev(list, -1, -1);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    insertion_sort_arr(array, n);

    return (0);
}
