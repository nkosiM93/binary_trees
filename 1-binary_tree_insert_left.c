#include "binary_trees.h"

/**
 * binary_tree_insert_left - insterts a node to the left of a parent
 *
 * @parent: The parent node
 * @value: the value of the created node
 * Return: Pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;


	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (!parent->left)
		parent->left = node;
	else
	{
		temp = parent->left;
		temp->parent = node;
		parent->left = node;
		node->left = temp;
	}
	return (node);

}
