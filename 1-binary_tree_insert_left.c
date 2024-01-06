#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left child of another node
* @parent: points to the parent node to insert left child in
* @value: value to store in the new node
* Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (parent == NULL)
		return (NULL);
	/* allocate memory to new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = NULL;

	/* check if the pointer to the leftchild is true */
	if (parent->left)
	{
		/* temp holds old left node */
		old_node = parent->left;
		/* old_node parent points to new_node */
		old_node->parent = new_node;
		parent->left = new_node;
		new_node->left = old_node;
	}
	else
		parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
