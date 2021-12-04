#include "binary_trees.h"

/**
 * depth - Function to measures the depth of a node.
 *
 * Return: Depth of the node.
 * @tree: Is a pointer to root of the binaty tree.
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - Function to check if a binary tree is full.
 *
 * Return: 1 if is full or 0 otherwise.
 * @tree: Is a pointer to root of the binaty tree.
 * @d: is the depth.
 * @level: is the level to compare with depth.
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}


/**
 * binary_tree_is_perfect - Function to check if a binary tree is full.
 *
 * Return: 1 if is full or 0 otherwise.
 * @tree: Is a pointer to root of the binaty tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_v = depth(tree);

	if (tree == NULL)
		return (0);

	return (is_perfect(tree, depth_v, 0));
}
