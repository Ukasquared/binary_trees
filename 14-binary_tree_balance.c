#include "binary_trees.h"
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */

size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t l_height, r_height;

    if (tree == NULL)
        return (0);

    l_height = binary_tree_height(tree->left);
    r_height = binary_tree_height(tree->right);

    return ((l_height > r_height ? l_height : r_height) + 1);
}
