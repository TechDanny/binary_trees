#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is leaf
 * @node:pointer to the node
 *
 * Return:1 if node is leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		return (node->left == NULL && node->right == NULL);
	}
}
