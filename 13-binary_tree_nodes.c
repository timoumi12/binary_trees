#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the node with at least 1 child
 * @tree: a pointer to the root of the tree
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right || tree->left)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
