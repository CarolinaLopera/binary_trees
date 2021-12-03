#include "binary_trees.h"

/**
 * binary_tree_is_full - Function to check if a binary tree is full.
 *
 * Return: 1 if is full or 0 otherwise.
 * @tree: Is a pointer to root of the binaty tree.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
