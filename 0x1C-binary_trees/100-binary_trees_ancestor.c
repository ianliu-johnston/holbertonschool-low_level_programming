#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
  * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
  * @first: first node to evaluate
  * @second: second node to evaluate
  * Return: pointer to the lowest common ancestor.
  * also returns NULL if first or second is NULL,
  * or if no ancestor was found
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
			const binary_tree_t *second)
{
	int depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = (int)binary_tree_depth(first);
	depth_second = (int)binary_tree_depth(second);

	while (depth_first < depth_second)
		second = second->parent, depth_second--;
	while (depth_first > depth_second)
		first = first->parent, depth_first--;

	for ( ; first != second && depth_first >= 0
			&& depth_second >= 0; depth_first--, depth_second--)
		first = first->parent, second = second->parent;

	if (depth_first >= 0 && depth_second >= 0 && first == second)
		return ((binary_tree_t *)first);
	return (NULL);
}
