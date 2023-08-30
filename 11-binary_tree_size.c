#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:pointer to root node
 *
 * Return:0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeLeft;
	size_t sizeRight;

	if (tree == NULL)
	{
		return (0);
	}

	sizeLeft = binary_tree_size(tree->left);
	sizeRight = binary_tree_size(tree->right);

	return (1 + sizeLeft + sizeRight);
}
