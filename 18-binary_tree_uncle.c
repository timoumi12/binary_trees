#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of the node
 * @node: is the pointer to the node
 * Return: pointer to the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	return (binary_tree_sibling(parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node in order to fine its sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	if (parent->left == node)
		if (parent->right != NULL)
			return (parent->right);
	if (parent->right == node)
		if (parent->left != NULL)
			return (parent->left);
	return (NULL);
}
