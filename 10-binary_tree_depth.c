#include "binary_trees.h"

/**
 * binary_tree_depth - func that check level of node
 * @tree: node to be level checked
 * Return: level number
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (level);
	level = 1 + binary_tree_depth(tree->parent);
	return (level);
}
