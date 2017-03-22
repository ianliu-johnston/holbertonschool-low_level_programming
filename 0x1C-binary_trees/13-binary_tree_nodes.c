#include "binary_trees.h"
/**
  * binary_tree_nodes - counts nodes with at least 1 child
  * @tree: tree to measure
  * Return: number of nodes with children
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
