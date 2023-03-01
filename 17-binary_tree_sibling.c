#include "binary_trees.h"

/**
* binary_tree_sibling- To find the sibiling of BS
* @node: The tree whose siblings to be found
* Return: the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);

}
