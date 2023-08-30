#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:pointer to the node
 *
 * Return:NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node:pointer to the node
 *
 * Return:NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}
	else
	{
		return (NULL);
	}
}
