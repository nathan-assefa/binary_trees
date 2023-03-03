#include "binary_trees.h"

/**
* is_bst- To check if a tree is BST
* @tree: A BST tree
* @min: minimum range
* @max: maximum range
* Return: 0 or 1
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
* height- to find the height of AVL
* @tree: a tree whose height is to be found
* Return: 0 or 1
*/
int height(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	a = height(tree->left);
	b = height(tree->right);
	return (MAX(a, b) + 1);
}

/**
* balance_factor- to find the balance factor of BST
* @tree: Tree whose balance factore is to be found
* Return: 0 or 1
*/
int balance_factor(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	a = height(tree->left);
	b = height(tree->right);
	return (a - b);
}

/**
* is_avl- to check if a tree is AVL
* @tree: A binary tree
* Return: 0 or 1
*/
int is_avl(const binary_tree_t *tree)
{
	int ans;

	ans = balance_factor(tree);
	if (abs(ans) > 1)
		return (0);
	else if (abs(ans) < 1)
		return (1);
	return (balance_factor(tree->left) && balance_factor(tree->right));
}

/**
* binary_tree_is_avl- AVL or not
* @tree: binary tree
* Return: 0 or 1
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (is_bst(tree, INT_MIN, INT_MAX))
		return (is_avl(tree));
	return (0);
}
