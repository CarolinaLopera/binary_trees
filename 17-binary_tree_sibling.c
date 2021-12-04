#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measures the depth of a node.
 *
 * Return: Depth of the node.
 * @tree: Is a pointer to root of the binaty tree.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);

	return (NULL);
}
