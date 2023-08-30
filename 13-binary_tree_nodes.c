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

	if (tree->left != NULL || tree->right != NULL)
	{
		leftNode = binary_tree_nodes(tree->left);
		rightNode = binary_tree_nodes(tree->right);

		return (leftNode + rightNode + 1);
	}
	return(0);
}
