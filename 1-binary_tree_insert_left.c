#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to be stored in the new node
 * Return: a pointer to the node to be addedd
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
