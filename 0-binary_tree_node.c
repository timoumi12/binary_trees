#include "binary_trees.h"

/**
* binary_tree_node - a function that creates a tree node
* @parent: the pointer to the parent node
* @value: is the value to add to the node
* Return: a pointer to the node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
	}
	return (node);
}
