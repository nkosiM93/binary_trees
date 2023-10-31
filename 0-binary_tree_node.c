#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node and adds to the binary tree
 * @parent: The parent node
 * @value: Thvalue of the node to be created
 * Return: Returns a pointer to the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
