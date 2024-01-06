#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the tree to measure the depth of the node
 * Return: thr height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree == NULL)
		return 0;
	if (tree->left == NULL && tree->right)
		return 0;
	return ( + binary_tree_depth(tree->left));
	return ( + binary_tree_depth(tree->right));
}
