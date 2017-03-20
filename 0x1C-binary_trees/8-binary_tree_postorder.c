#include "binary_trees.h"
/**
  * binary_tree_postorder - traverse a tree in post order
  * @tree: Tree to traverse
  * @func: Function pointer to the print function
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
