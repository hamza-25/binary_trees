#include "binary_trees.h"

/**
 * binary_tree_height - func that count height of a node
 * @tree: node to be checked
 * Return: number of edge
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h, left_h;

	if (!tree)
		return (0);
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (right_h > left_h ? right_h : left_h);
}
