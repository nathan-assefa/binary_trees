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

/**
* binary_tree_balance- To find the balance factor of BS
* @tree: A tree whose balace factore is to be found
* Return: Balance factore of a binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
	return (0);

	left = (int) binary_tree_height(tree->left);
	right = (int) binary_tree_height(tree->right);
	return (left - right);
}
