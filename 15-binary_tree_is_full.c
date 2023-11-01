#include "binary_trees.h"

/**
 * binary_tree_is_full - func that count at least one child
 * @tree: node to be count from
 * Return: 1 if full else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		 return (1);
	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (left_full && right_full);
	}
	return (0);
}
