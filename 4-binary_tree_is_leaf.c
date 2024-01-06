#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf
 * @node: pointer to the node to check
 * Return: 1 if true 0r 0 if false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right || node->left)
		return (1);
	return (0);
}
