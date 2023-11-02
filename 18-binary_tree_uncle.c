#include "binary_trees.h"

/**
 * binary_tree_uncle - func that check for uncle
 * @node: node to be check from
 * Return: the uncle of node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_pa_node;
	binary_tree_t *parent_node;

	if (!node || !node->parent)
		return (NULL);
	parent_node = node->parent;
	if (!parent_node->parent)
		return (NULL);
	grand_pa_node = node->parent->parent;
	if (grand_pa_node->left && grand_pa_node->left == parent_node)
		return (grand_pa_node->right);
	else
		return (grand_pa_node->left);
}
