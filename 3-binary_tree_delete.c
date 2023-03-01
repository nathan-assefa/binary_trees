#include "binary_trees.h"

/**
* binary_tree_delete- To delete the BS
* @tree: A tree to be deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
