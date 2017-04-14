#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
    binary_tree_t *ancestor;

	if (!n1 || !n2)
	{
		fprintf(stderr, "NULL values found\n");
		return;
	}
    ancestor = binary_trees_ancestor(n1, n2);
    printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
    if (!ancestor)
        printf("(nil)\n");
    else
        printf("%d\n", ancestor->n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *apple_root;

    apple_root = binary_tree_node(NULL, 164);
    apple_root->left = binary_tree_node(apple_root, 35);
    apple_root->right = binary_tree_node(apple_root, 329);
    apple_root->right->right = binary_tree_node(apple_root, 76);

    launch_test(NULL, NULL);
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 128);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 45);
    root->right->right->left = binary_tree_node(root->right->right, 92);
    root->right->right->right = binary_tree_node(root->right->right, 65);
    binary_tree_print(root);

    launch_test(root->left, root->right);
    launch_test(root->left->left, root->left->right);
    launch_test(root->left->right, root->right);
    launch_test(root->left->right->right, root->right);
    launch_test(root->left->left, root->right);
	launch_test(root->left, root->right->left);
	launch_test(root->left, root->right->right);
	launch_test(root->right->left, root->right->right->right);
    launch_test(root->right->right, root->right->right->right);
    launch_test(root->right, root->right->right->left);

	/** Separate trees **/
    binary_tree_print(apple_root);
    launch_test(apple_root->right, root->left->right);
    return (0);
}
