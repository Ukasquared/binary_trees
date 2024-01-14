#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: check if node is root
 *
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
