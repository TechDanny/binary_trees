#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root
 * @node:pointer to the node
 *
 * Return:1 if node is root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		return (node->parent == NULL);
	}
}
