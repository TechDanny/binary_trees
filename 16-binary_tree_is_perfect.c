#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree:pointer to the root node
 *
 * Return:0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t binary_height;
	size_t binary_size;

	if (tree == NULL)
	{
		return (0);
	}

	binary_height = binary_tree_height(tree);
	binary_size = binary_tree_size(tree);

	return (binary_size == (size_t)(1 << binary_height) - 1);
}


/**
 * binary_tree_height - measures the height of binary
 * @tree:pointer to the root node
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
	leftHeight += 1 + binary_tree_height(tree->left);
	rightHeight += 1 + binary_tree_height(tree->right);

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_size - measures the size of binary tree
 * @tree:pointer to the root node
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
