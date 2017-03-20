#include "binary_trees.h"
/**
  * binary_tree_is_root - checks to see if root node
  * @node: Node to check
  * Return: 1 if root node, 0 all other cases
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
