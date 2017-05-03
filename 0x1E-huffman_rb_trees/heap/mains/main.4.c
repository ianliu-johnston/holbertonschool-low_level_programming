<pre><code>alex@/tmp/huffman_rb_trees$ cat 1-main.c
#include <stdlib.h>
#include <stdio.h>
#include "heap.h"

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
    binary_tree_node_t *node;
    int n, n2;

    n = 5;
    n2 = 10;
    node = binary_tree_node(NULL, &n);
    if (node == NULL)
    {
        fprintf(stderr, "Failed to create a node\n");
        return (EXIT_FAILURE);
    }
    printf("Node(%p): data(%d) left(%p) right(%p) parent(%p)\n",
        (void *)node, *((int *)node->data), (void *)node->left,
        (void *)node->right, (void *)node->parent);

    node->left = binary_tree_node(node, &n2);
    if (node == NULL)
    {
        fprintf(stderr, "Failed to create a node\n");
        return (EXIT_FAILURE);
    }
    printf("Node(%p): data(%d) left(%p) right(%p) parent(%p)\n",
        (void *)node->left, *((int *)node->left->data), (void *)node->left->left,
        (void *)node->left->right, (void *)node->left->parent);

    return (EXIT_SUCCESS);
}
