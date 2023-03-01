#include "binary_trees.h"

/**
 * binary_tree_leaves- to count the leaves of BS
 * @tree: A tree whose leaf node is to be counted
 * Return: number of the leaf node;
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf, right_leaf;

	if (!tree)
		return (0);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	if (left_leaf == 0 && right_leaf == 0)
		return (1);

	return (left_leaf + right_leaf);

}
