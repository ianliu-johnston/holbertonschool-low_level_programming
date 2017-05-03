<pre><code>alex@/tmp/huffman_rb_trees$ cat 103-main.c
#include <stdlib.h>
#include "rb_trees.h"

void rb_tree_print(const rb_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    rb_tree_t *tree;
    int array[] = {
        79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
        20, 22
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = array_to_rb_tree(array, n);
    if (!tree)
        return (1);
    rb_tree_print(tree);
    return (0);
}
