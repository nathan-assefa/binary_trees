#include "binary_trees.h"

/**
* create_new- To create a new BST node
* @tree: pointer to parent node
* @new: the new node created
* @value: Data to be inserted
* Return: created node
*/
bst_t *create_new(bst_t *parent, bst_t **new, int value)
{
	binary_tree_t *aux;

	aux = binary_tree_node((binary_tree_t *)(parent), value);
	*new = (bst_t *)aux;
	return (*new);
}

/**
* bst_insert- To insert in BST
* @tree: a pointer to a newly created BST
* @value: Data to be added in BST
* Return: Created BST
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
		new = *tree = (bst_t *) binary_tree_node(NULL, value);

	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				new = bst_insert(&temp->left, value);
			else
				temp->left = create_new(temp, &new, value);
		}
		else if (value > temp->n)
		{
			if (temp->right)
				new = bst_insert(&temp->right, value);
			else
				temp->right = create_new(temp, &new, value);
		}
		else
			return (NULL);
	}
	return (new);
}
