#include "binary_trees.h"

/**
 * max - returns the maximum between 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: the maximum between the 2
 */

size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}
/**
 * binary_tree_height -a function that mesures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);
	return (max(left_size, right_size));
}
