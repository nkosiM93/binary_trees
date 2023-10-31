#include "binary_trees.h"
/**
 * binary_tree_size -measures the size of tree
 * @tree: pointer to the root node of the tree to measure
 * Return: size, or 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}
