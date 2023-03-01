#include "binary_trees.h"

/**
* binary_tree_sibling - to find the sibling of a BS
* @node: a node whose sibling node is to be found
* Return: sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node
	? node->parent->right
	: node->parent->left);
}

/**
* binary_tree_uncle- To find the uncle node of BS
* @node: A node to whose uncle node is to be found
* Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
