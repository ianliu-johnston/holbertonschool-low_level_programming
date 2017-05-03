<pre><code>alex@/tmp/huffman_rb_trees$ cat 100-main.c
#include <stdlib.h>
#include "rb_trees.h"

void rb_tree_print(const rb_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    rb_tree_t *root;

    root = rb_tree_node(NULL, 98, BLACK);

    root->left = rb_tree_node(root, 12, RED);
    root->left->left = rb_tree_node(root->left, 6, BLACK);
    root->left->right = rb_tree_node(root->left, 16, BLACK);

    root->right = rb_tree_node(root, 402, RED);
    root->right->left = rb_tree_node(root->right, 256, BLACK);
    root->right->right = rb_tree_node(root->right, 512, BLACK);

    rb_tree_print(root);
    return (EXIT_SUCCESS);
}
