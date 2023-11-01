#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: The root pointer
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = 0;
	height_r = 0;

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);

}
