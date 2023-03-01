#include "binary_trees.h"

/**
* binary_tree_nodes- to find no_leaf nodes
* @tree: Tree whose no leaf nodes are to be counted
* @Return: Number of no leaf nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_no_leaf, right_no_leaf;

	if (!tree)
		return 0;

	left_no_leaf = binary_tree_nodes(tree->left);
	right_no_leaf = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (left_no_leaf + right_no_leaf + 1);
	return (0);
}
