#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:pointer to the root node of tree
 *
 * Return:0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
	leftHeight += 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
	rightHeight += 1 + binary_tree_height(tree->right);
	}

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
