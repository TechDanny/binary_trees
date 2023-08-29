#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left child
 * @parent:pointer to the node
 * @value:number to store the new node
 *
 * Return:pointer or NULL om failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
	{
		newNode->left = NULL;
	}
	parent->left = newNode;

	return (newNode);
}
