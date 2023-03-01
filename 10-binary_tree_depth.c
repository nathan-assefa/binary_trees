#include "binary_trees.h"
/**
 * tree_depth - returns the depth of a binary tree
 * @tree: the tree whose depth is to be returned
 * Return: depth of tree
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t a;

	if (!tree)
		return (0);

	a = tree_depth(tree->parent);
	return (a + 1);
}

/**
 * binary_tree_depth - To find the depth of binary tree
 * @tree: pointer to binary tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_depth(tree) - 1);
}
