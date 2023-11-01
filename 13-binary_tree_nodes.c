#include "binary_trees.h"

/**
 * binary_tree_nodes - func that count at least one child
 * @tree: node to be count from
 * Return: number of leaves
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
