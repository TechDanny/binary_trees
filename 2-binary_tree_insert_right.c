#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right child
 * @parent:pointer to the node
 * @value:number to store
 *
 * Return:pointer or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
	{
		newNode->right = NULL;
	}
	parent->right = newNode;

	return (newNode);
}
