#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if true, 0 if false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r, value, height, l_height, r_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);
	l_height = 1 + l;
	r_height = 1 + r;
	height = l_height == r_height ? 1 : 0;
	value = r == l ? 1 : 0;
	if (height && value)
		return (1);
	return (0);
}
