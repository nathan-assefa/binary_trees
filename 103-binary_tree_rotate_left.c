#include "binary_trees.h"

/**
* binary_tree_rotate_left- Making right rotation
* @tree: A binary tree
* Return: rotated tree
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rotate;

	if (!tree || !tree->right)
		return (NULL);

	rotate = tree->right;

	if (rotate->left)
		rotate->left->parent = tree;

	tree->right = rotate->left;
	rotate->left = tree;
	rotate->parent = tree->parent;
	tree->parent = rotate;

	return (rotate);
}
