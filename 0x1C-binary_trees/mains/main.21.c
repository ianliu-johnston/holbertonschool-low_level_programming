#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 1);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);
    root->left->left = binary_tree_node(root->left, 4);
    root->left->right = binary_tree_node(root->left, 5);
    root->right->left = binary_tree_node(root->right, 6);
    root->right->right = binary_tree_node(root->right, 7);
	root->left->left->left = binary_tree_node(root->left->left, 8);
	root->left->left->right = binary_tree_node(root->left->left, 9);
	root->left->right->left = binary_tree_node(root->left->right, 10);
	root->left->right->right = binary_tree_node(root->left->right, 11);

	root->right->left->left = binary_tree_node(root->right->left, 8);

    binary_tree_print(root);
    binary_tree_levelorder(root, &print_num);
    binary_tree_delete(root);
    return (0);
}
