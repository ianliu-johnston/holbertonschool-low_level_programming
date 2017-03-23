#include "binary_trees.h"
/**
  * binary_tree_is_perfect - checks if tree is perfect
  * @tree: tree to check
  * Return: 1 if it is perfect
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		return (0);
	return (1);
}
