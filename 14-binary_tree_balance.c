#include "binary_trees.h"
/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_h = binary_tree_height(tree->left);
	int right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}
