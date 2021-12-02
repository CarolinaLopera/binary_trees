#include "binary_trees.h"

/**
 * binary_tree_preorder - Function to check if a node is a root.
 *
 * Return: Always void.
 * @tree: Is a pointer to root of the binaty tree.
 * @func: Is a pointer to function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, *func);
	binary_tree_preorder(tree->right, *func);
}
