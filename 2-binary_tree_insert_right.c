#include "binary_trees.h"

/**
 * binary_tree_insert_right - func that create right node of tree
 * @parent: parent of new node
 * @value: value of the node
 * Return: new node created
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->left = NULL;
	new_node->right = parent->right;
	new_node->n = value;
	new_node->parent = parent;

	if (parent->right)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
