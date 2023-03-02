#include "binary_trees.h"

/**
* is_bst- To check if a BT is BST
* @tree: Tree to be analysed
* @min: min value
* @max: max value
* Return: 1 or 0
*/
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n > min && tree->n < max
		&& is_bst(tree->left, min, tree->n)
		&& is_bst(tree->right, tree->n, max)
	)
		return (1);
	return (0);
}


/**
* binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
* @tree: pointer to root of tree
* Return: 1 if true 0 if false
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
