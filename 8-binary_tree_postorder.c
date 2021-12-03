#include "binary_trees.h"

/**
 * binary_tree_postorder - Through a binary tree using post-order traversal.
 *
 * Return: Always void.
 * @tree: Is a pointer to root of the binaty tree.
 * @func: Is a pointer to function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, *func);
	binary_tree_postorder(tree->right, *func);
	func(tree->n);
}
