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

	if (!tree)
		return (0);

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
/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;
	
	if (!tree)
		return (0);
	
	left_h= binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	return (left_h - right_h);
}
