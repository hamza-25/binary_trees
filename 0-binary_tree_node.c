#include "binary_trees.h"

/**
 * binary_tree_node - func that create node of tree
 * @parent: parent of new node
 * @value: value of the node
 * Return: new node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		return (new_node);
	}
	else
		return (NULL);
}
