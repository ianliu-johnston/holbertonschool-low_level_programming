#include "binary_trees.h"
/**
  * binary_tree_uncle - finds the parent's sibling of the current node
  * @node: node to check
  * Return: pointer to the uncle.
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (parent->parent && parent->parent->left != parent)
		return (parent->parent->left);
	else if (parent->parent && parent->parent->right != parent)
		return (parent->parent->right);
	return (NULL);
}
