#include "binary_trees.h"
/**
  * binary_tree_insert_left - insert a node as a left child
  * @parent: The parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if(!parent)
		return (NULL);
	if(parent->left != NULL)
	{
		parent->left->n = value;
		return(parent->left);
	}
	left_child = malloc(sizeof(binary_tree_t));
	if (!left_child)
		return (NULL);
	left_child->n = value;
	left_child->right = left_child->left = NULL;
	left_child->parent = parent;
	parent->left = left_child;
	return (left_child);
}
