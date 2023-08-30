#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:pointer to the root node
 *
 * Return:0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaf;
	size_t rightLeaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	leftLeaf = binary_tree_leaves(tree->left);
	rightLeaf = binary_tree_leaves(tree->right);

	return (leftLeaf + rightLeaf);
}
