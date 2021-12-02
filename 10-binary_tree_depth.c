#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measures the depth of a node.
 *
 * Return: Depth of the node.
 * @tree: Is a pointer to root of the binaty tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
