#include "binary_trees.h"

/**
 * binary_tree_heights - func that height
 * @tree: start node
 * Return: biggest height
*/

int binary_tree_heights(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (!tree)
		return (0);
	left_h = tree->left ? 1 + binary_tree_heights(tree->left) : 1;
	right_h = tree->right ? 1 + binary_tree_heights(tree->right) : 1;
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - func that count at least one child
 * @tree: start node
 * Return: balanced number
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_heights(tree->left) - binary_tree_heights(tree->right));
}
