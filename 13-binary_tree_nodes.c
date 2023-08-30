#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree
 * @tree:pointer to the root node
 *
 * Return:1
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNode;
	size_t rightNode;

	if (tree == NULL)
	{
		return (0);
	}

	leftNode = binary_tree_nodes(tree->left);
	rightNode = binary_tree_nodes(tree->right);

	return (1 + leftNode + rightNode);
}
