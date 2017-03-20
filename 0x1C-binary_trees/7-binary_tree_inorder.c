#include "binary_trees.h"
/**
  * binary_tree_inorder - traverse the tree inorder
  * @tree: Tree to traverse
  * @func: Function pointer to printing function
  * Return: 0 on success
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
