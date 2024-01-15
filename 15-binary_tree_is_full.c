#include "binary_trees.h"
/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if true, 0 if false
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t l, r, value;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	value = r == l ? 1 : 0;
	return (value);
}
