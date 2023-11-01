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
	left_h = binary_tree_balance(tree->left);
	right_h = binary_tree_balance(tree->right);
	return (left_h - right_h);
}
