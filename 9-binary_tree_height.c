#include "binary_trees.h"

/**
* tree_height- To find height of a tree
* @tree: Tree whose height is to be found
* Return: height of binary tree
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = tree_height(tree->left);
	b = tree_height(tree->right);
	return (MAX(a, b) + 1);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a tree whose height is to be found
* Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree));
}
