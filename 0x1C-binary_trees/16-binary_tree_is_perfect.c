#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  * binary_tree_is_perfect - checks if tree is perfect
  * @tree: tree to check
  * Return: 1 if it is perfect
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	l = r = 0;
	if (!tree)
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		l = binary_tree_is_perfect(tree->left);
		r = binary_tree_is_perfect(tree->right);
		return (l && r);
	}
	return (0);
}
