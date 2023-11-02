#include "binary_trees.h"

/**
 * binary_tree_sibling - func that check for sibling
 * @node: node to be check from
 * Return: the sibling of node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node;

	if (!node || !node->parent)
		return (NULL);
	parent_node = node->parent;
	if (!parent_node->left || !parent_node->right)
		return (NULL);
	if (parent_node->left == node)
		return (parent_node->right);
	else
		return (parent_node->left);
}
