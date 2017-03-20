#include "binary_trees.h"
/**
  * binary_tree_insert_right - insert a node as a right child
  * @parent: The parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (!parent)
		return (NULL);
	right_child = malloc(sizeof(binary_tree_t));
	if (!right_child)
		return (NULL);
	right_child->n = value;
	right_child->parent = parent;
	right_child->left = NULL;
	right_child->right = NULL;
	if (parent->right == NULL)
		parent->right = right_child;
	else
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
		parent->right = right_child;
	}
	return (right_child);
}
