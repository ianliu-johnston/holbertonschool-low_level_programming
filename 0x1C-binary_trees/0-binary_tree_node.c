#include "binary_trees.h"
/**
  * binary_tree_node - Creates a node in the tree.
  * @parent: the parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
