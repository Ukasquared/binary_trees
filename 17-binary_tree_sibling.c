#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: finds the sibling of a node
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p_node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	p_node = node->parent;
	if (p_node->left && p_node->left != node)
		return (p_node->left);
	if (p_node->right && p_node->right != node)
		return (p_node->right);
	return (NULL);
}
