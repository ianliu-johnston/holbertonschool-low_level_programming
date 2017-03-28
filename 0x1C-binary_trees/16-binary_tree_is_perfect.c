#include "binary_trees.h"
/**
  * binary_tree_is_perfect - checks if tree is perfect
  * @tree: tree to check
  * Return: 1 if it is perfect
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	return (left && right);
}
