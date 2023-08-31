#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that check if a given node is a root
 * @node: a pointer to the node to be checked
 * Return: 1 if it is a root and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
