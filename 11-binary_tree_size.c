#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r, root_node = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	root_node += 1 + l + r;
	return (root_node);
}
