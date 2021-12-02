#include "binary_trees.h"

/**
 * binary_tree_delete - Function to deletes an entire binary tree.
 *
 * Return: Always a pointer to the node created.
 * @tree: Is the root of the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
