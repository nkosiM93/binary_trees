#include "binary_trees.h"

/**
 * binary_tree_depth - tree depth messurment
 *
 * @tree: Pointer to the root node
 *
 * Return: void
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
