#include "binary_trees.h"
#include "stdio.h"
/**
 * binary_tree_is_perfect -  checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if true, 0 if false
*/

size_t is_perfect(const binary_tree_t *tree, size_t height, size_t level);
size_t height(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, level = 0;

	if (tree == NULL)
		return (0);
	h = height(tree);
	return (is_perfect(tree, h, level));
}

/**
 * height - calculate depth of a tree
 * @tree: pointer to the root
 * Return: height of tree
 */

size_t height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l_height = height(tree->left);
	r_height= height(tree->right);
	return (l_height > r_height ? l_height + 1 : r_height + 1);
}

/**
 * is_perfect - check if tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if true otherwise 0
 */

size_t is_perfect(const binary_tree_t *tree, size_t height, size_t level)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (height == level ? 1: 0);
	l = is_perfect(tree->left, height, level + 1);
	r = is_perfect(tree->right, height, level + 1);
	return (l && r);
}
