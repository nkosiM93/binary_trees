#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder traveral implimentation
 * @tree: Pointer to the root of the tree structure
 * @func: Prints the value of the node being traversed
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
