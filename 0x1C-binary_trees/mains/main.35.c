#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 90);
    root->right = binary_tree_node(root, 85);
    root->left->right = binary_tree_node(root->left, 80);
    root->left->left = binary_tree_node(root->left, 79);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int heap;

    root = basic_tree();

    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    heap = binary_tree_is_heap(root->left);
    printf("Is %d heap: %d\n", root->left->n, heap);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);

    root = basic_tree();
    root->right->right = binary_tree_node(root->right, 79);
    binary_tree_print(root);
    heap = binary_tree_is_heap(root);
    printf("Is %d heap: %d\n", root->n, heap);
    return (0);
}
