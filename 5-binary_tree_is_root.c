#include "binary_trees.h"

/**
 * binary_tree_is_root - func that check if node root
 * @node: node to be chechked
 * Return: 1 if root otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
