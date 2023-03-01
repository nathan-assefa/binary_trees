#include "binary_trees.h"

/**
 * binary_tree_size - to find the size of the binary tree
 * @tree: The tree whose size is to be solved
 * Return: the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	return (a + b + 1);
}
