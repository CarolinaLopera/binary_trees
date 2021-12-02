#include "binary_trees.h"

/**
 * print - print all nodes of a binary tree.
 *
 * Return: Always void.
 * @tree: Is a pointer to root of the binaty tree.
 */
void print(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		printf("%i\n", tree->n);
		print(tree->left);
	    print(tree->right);
	}
}

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

	/* binary_tree_preorder(tree, (*func)(10)); */

	print(tree);
}
