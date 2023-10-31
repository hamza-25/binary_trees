#include "binary_trees.h"

/**
 * binary_tree_preorder - func use pre order traversal
 * @tree: the root node
 * @func: pointer function that print value of node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func());
	binary_tree_preorder(tree->right, func());
}
