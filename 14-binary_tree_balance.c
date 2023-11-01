#include "binary_trees.h"

/**
 * binary_tree_balance - func that count at least one child
 * @tree: start node
 * Return: balanced number
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_h, left_h;

	if (!tree)
		return (0);
	left_h = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (left_h - right_h);
}
