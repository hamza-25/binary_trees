#include "binary_trees.h"

/**
 * binary_tree_height - func that count height of a node
 * @tree: node to be checked
 * Return: number of edge
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		count++;
	if (tree->right)
		count++;
	return (count);
}
