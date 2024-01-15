#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: the uncle node if true
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p_p_node;

	p_p_node = NULL;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/* get the parent and then the parent sibling */
	if (node->parent->parent)
		p_p_node = node->parent->parent;
	if (p_p_node)
	{
		if (p_p_node->left && p_p_node->left != node->parent)
			return (p_p_node->left);
		if (p_p_node->right && p_p_node->right != node->parent)
			return (p_p_node->right);
	}
	return (NULL);
}
