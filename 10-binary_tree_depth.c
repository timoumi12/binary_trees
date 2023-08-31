#include "binary_trees.h"

/**
 * binary_tree_depth -a function that mesures the depth of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the height of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t res = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		res += 1 + binary_tree_depth(tree->parent);
	return (res);
}
