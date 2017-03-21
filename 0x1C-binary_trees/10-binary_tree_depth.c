#include "binary_trees.h"
/**
  * binary_tree_depth - returns the depth of a binary tree
  * @node: Node to measure the depth from
  * Return: depth of the binary tree
  */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int i;

	for (i = 0; node && node->parent; ++i)
		node = node->parent;
	return (i);
}
