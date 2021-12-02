#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function create a node left in a binary tree.
 *
 * Return: Always a pointer to the node created.
 * @value: Is a integer to store in the node.
 * @parent: Is the pather of the node to be created.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		current = parent->left;
		new->left = current;
		current->parent = new;
	}

	parent->left = new;
	return (new);
}
