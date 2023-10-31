#include "binary_trees.h"

/**
 * binary_tree_insert_left - func that create left node of tree
 * @parent: parent of new node
 * @value: value of the node
 * Return: new node created
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->right = NULL;
	new_node->left = parent->left;
	new_node->n = value;
	new_node->parent = parent;

	if (parent->left)
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
