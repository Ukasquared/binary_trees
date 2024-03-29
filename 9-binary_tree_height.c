#include "binary_trees.h"

size_t traverse(binary_tree_t *tree);
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: points to the root node of the tree to measure thr height
 *
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	r = (1 + binary_tree_height(tree->right));
	l = (1 + binary_tree_height(tree->left));
	height += (r > l ? r : l);
	return (height);
}
