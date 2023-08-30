#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a
 * binary tree
 * @tree:pointer to the root node
 *
 * Return:0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}

/**
 * binary_tree_height - measures the height of binary tree
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
