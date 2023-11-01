#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes that
 * have atleast 1 child
 * @tree: treee
 * Return: c or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c;

	if (!tree)
		return (0);
	c = 0;
	if (tree->left || tree->right)
	{
		c += binary_tree_nodes(tree->left);
		c += binary_tree_nodes(tree->right);
	}
	else
		c = 1;
	return (c);
}
