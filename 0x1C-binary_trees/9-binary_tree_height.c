#include "binary_trees.h"
/**
  * binary_tree_height - define function
  * @void: describe argument
  * Return: 0 on success
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;
	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return(right > left ? right : left);
}
