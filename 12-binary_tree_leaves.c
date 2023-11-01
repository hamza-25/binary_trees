#include "binary_trees.h"

/**
 * binary_tree_leaves - func that count leaves of tree
 * @tree: node to be count from
 * Return: size of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leaf++;
	if (tree->right)
		leaf++;
	if (!tree->left && !tree->right)
		leaf++;
	return (leaf);

}
