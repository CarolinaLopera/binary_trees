#include "binary_trees.h"

/**
 * binary_tree_inorder - Through a binary tree using in-order traversal.
 *
 * Return: Always void.
 * @tree: Is a pointer to root of the binaty tree.
 * @func: Is a pointer to function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, *func);
	func(tree->n);
	binary_tree_inorder(tree->right, *func);
}
