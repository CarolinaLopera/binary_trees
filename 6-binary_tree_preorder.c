#include "binary_trees.h"

void print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("%i\n", tree->n);
	print(tree->left);
    print(tree->right);
}

/**
 * binary_tree_preorder - Function to check if a node is a root.
 *
 * Return: 1 if the node is a root, otherwise 0.
 * @node: Is a node to check.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	print(tree);
}
