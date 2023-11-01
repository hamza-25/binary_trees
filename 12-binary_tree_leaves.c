#include "binary_trees.h"

/**
 * binary_tree_leaves - func that count leaves of tree
 * @tree: node to be count from
 * Return: size of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_left, leaf_right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaf_left = binary_tree_leaves(tree->left);
	leaf_right = binary_tree_leaves(tree->right);
	return (leaf_left + leaf_right);

}
