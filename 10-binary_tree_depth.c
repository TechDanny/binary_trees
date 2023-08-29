#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of node
 * @tree:pointer to the node
 *
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
	{
		size_depth += 1 + binary_tree_depth(tree->parent);
	}
	return (size_depth);
}
