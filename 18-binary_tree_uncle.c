#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node, or NULL if not found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	temp = node->parent;
	if (!node || !node->parent)
		return (NULL);
	if (temp->left == node)
		return (temp->right);
	else if (temp->right == node)
		return (temp->left);
return (NULL);
}

/**
 * binary_tree_uncle - Find the uncle of a node.
 * @node: A pointer to the node for which to find the uncle.
 * Return: A pointer to the uncle node or NULL if no uncle exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
