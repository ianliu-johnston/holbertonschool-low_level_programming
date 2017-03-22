#include "binary_trees.h"
/**
  * binary_tree_is_full - Checks to see if a tree is full
  * @tree: tree to measure
  * Return: 1 if full, 0 if not full.
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
	}
	return ((tree->right && !tree->left) || (!tree->right && tree->left) ? 0 : 1);
}
