#include "binary_trees.h"

/**
 * binary_tree_is_leaf - func that check if node leaf
 * @node: node to be chechked
 * Return: 1 if leaf otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
