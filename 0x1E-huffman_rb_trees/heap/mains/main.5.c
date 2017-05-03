<pre><code>alex@/tmp/huffman_rb_trees$ cat 2-main.c
#include <stdlib.h>
#include <stdio.h>
#include "heap.h"

/**
 * int_cmp - Compares two integers
 *
 * @p1: First pointer
 * @p2: Second pointer
 *
 * Return: Difference between the two strings
 */
int int_cmp(void *p1, void *p2)
{
    int *n1, *n2;

    n1 = (int *)p1;
    n2 = (int *)p2;
    return (*n1 - *n2);
}

/**
 * print_int - Stores a string in a buffer
 *
 * @buffer: Buffer to store the string
 * @data: Pointer to the string
 *
 * Return: Number of bytes written in buffer
 */
int print_int(char *buffer, void *data)
{
    int *n;
    int length;

    n = (int *)data;
    length = sprintf(buffer, "(%03d)", *n);
    return (length);
}

void binary_tree_print(const binary_tree_node_t *root, int (*print_data)(char *, void *));

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
    heap_t *heap;
    int array[] = {
        34, 2, 45, 23, 76
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    size_t i;
    binary_tree_node_t *node;

    heap = heap_create(int_cmp);
    if (heap == NULL)
    {
        fprintf(stderr, "Failed to create the heap\n");
        return (EXIT_FAILURE);
    }
    printf("Heap size: %lu\n", heap->size);
    printf("Heap root: %p\n", (void *)heap->root);

    for (i = 0; i < size; ++i)
    {
        node = heap_insert(heap, &(array[i]));
        if (node == NULL)
        {
            fprintf(stderr, "Failed to insert a node\n");
            return (EXIT_FAILURE);
        }
        binary_tree_print(heap->root, print_int);
        printf("\n");
    }
    printf("Heap size: %lu\n", heap->size);
    return (EXIT_SUCCESS);
}
