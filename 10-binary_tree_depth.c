#include "binary_trees.h"

size_t depth(const binary_tree_t *tree);
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the tree to measure the depth of the node
 * Return: the height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* size_t count;*/

	if (tree == NULL)
		return (0);
	if (!(tree->parent))
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

