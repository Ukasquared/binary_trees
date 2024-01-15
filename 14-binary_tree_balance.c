#include "binary_trees.h"
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r, bal_factor = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_balance(tree->left);
	r = binary_tree_balance(tree->right);
	bal_factor += l - r;
	return (bal_factor);
}
