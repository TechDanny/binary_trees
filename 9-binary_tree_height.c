#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:pointer to the root node of tree
 *
 * Return:0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
