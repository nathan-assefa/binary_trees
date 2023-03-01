#include "binary_trees.h"

/**
* binary_tree_is_leaf- To find the leaf node
* @node: The leaf node
* Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->left && !node->right)
		return (1);
	return (0);
}
