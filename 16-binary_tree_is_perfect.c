#include "binary_trees.h"

/**
* binary_tree_is_perfect- check if BS is perfect BS
* @tree: Tree to be chacked
* Return: 1 on success and 0 on failure
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left->left)
		&& binary_tree_is_perfect(tree->right->right));

	return (0);
}
