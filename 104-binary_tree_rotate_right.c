#include "binary_trees.h"

/**
* binary_tree_rotate- Making right rotation
* @tree: A binary tree
* Return: rotated tree
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotate;

	if (!tree || !tree->left)
		return (NULL);

	rotate = tree->left;
	if (rotate->right)
		rotate->right->parent = tree;

	tree->left = rotate->right;
	rotate->right = tree;
	rotate->parent = tree->parent;
	tree->parent = rotate;

	return (rotate);
}
