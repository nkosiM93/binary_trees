#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: The tree t be checked
 * Return: 0 if not perfect and 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	

	if ((binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right))
			&& (binary_tree_height(tree->left)
				== binary_tree_height(tree->right)))
		return (1);
	return (0);
}

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
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
