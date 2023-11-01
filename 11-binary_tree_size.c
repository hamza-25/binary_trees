#include "binary_trees.h"

/**
 * binary_tree_size - func that count size of tree
 * @tree: node to be count from
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (!tree)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (1 + size_right + size_left);
}
