#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a node right in a binary tree.
 *
 * Return: Always a pointer to the node created.
 * @value: Is a integer to store in the node.
 * @parent: Is the pather of the node to be created.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right != NULL)
	{
		current = parent->right;
		new->right = current;
		current->parent = new;
	}

	parent->right = new;
	return (new);
}
