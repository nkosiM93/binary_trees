#include "binary_trees.h"

/**
 * binary_tree_preorder - Implements the pre-oder traversal method
 * @tree: The pointer to the tree being traversed
 * @func: Points to a function that prints the value of each node as we travers
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
