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
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	if (new == NULL || current == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->parent = parent;

	if (parent->left == NULL)
	{
		new->left = NULL;
		/* new->parent = parent; */
		parent->left = new;
	}
	else
	{
		current = parent->left;
		current->parent = new;
		new->left = current;
		/* new->parent = parent; */
		parent->left = new;
	}

	return (new);
}
