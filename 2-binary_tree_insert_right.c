#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to be stored in the new node
 * Return: a pointer to the node to be addedd
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	return (node);
}￼Enter
