#include "binary_trees.h"
/**
  * *binary_trees_ancestor - define function
  * @void: describe argument
  * Return: 0 on success
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (second->parent == first)
		return (second->parent);
	if (first->parent == second)
		return (first->parent);
	if (binary_trees_ancestor(first->parent, second->parent) == binary_trees_ancestor(first->parent, second->parent))
		return (first->parent);
	return (NULL);
}
