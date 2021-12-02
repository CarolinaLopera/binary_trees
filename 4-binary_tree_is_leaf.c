#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if a node is a leaf.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 * @node: Is a node to check.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
