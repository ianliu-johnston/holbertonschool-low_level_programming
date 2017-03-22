#include "binary_trees.h"
/**
  * binary_tree_balance - Checks to see if the binary tree is balanced
  * @tree: tree to measure
  * Return: if tree is weighted left, return positive
  *         if tree is weighted right, return negative.
  *         if tree is balanced, return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = right = 0;
	printf("current node: %d\n", tree->n);
	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left && !tree->right)
	{
		left = binary_tree_balance(tree->left) + 1;
		printf("left = %d\n", left);
	}
	if (tree->right && !tree->left)
	{
		right = binary_tree_balance(tree->right) - 1;
		printf("right = %d\n", right);
	}
	return (left + right);
}
