#include "binary_trees.h"

/**
* binary_tree_is_full - To check whether a BS is full
* @tree: a pointer to the root node of the tree to check
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_recur, right_recur;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_recur = binary_tree_is_full(tree->left);
	right_recur = binary_tree_is_full(tree->right);

	return (left_recur && right_recur);
}
