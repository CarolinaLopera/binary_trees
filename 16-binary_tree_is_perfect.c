#include "binary_trees.h"

/**
 * tree_height - Function to measures the height of a binary tree.
 *
 * Return: Size of the tree.
 * @tree: Is a pointer to root of the binaty tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
		return (0);

	count_left = tree_height(tree->left);
	count_right = tree_height(tree->right);

	if (count_left > count_right)
		return (count_left + 1);
	else
		return (count_right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a constant pointer to root of the binaty tree.
 * Return: checks if a binary tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree_height(tree->right) - tree_height(tree->left) == 0)
		return (1);
	else
		return (0);
}
