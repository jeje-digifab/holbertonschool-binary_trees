#include "binary_trees.h"

/**
 * binary_tree_postorder - performs post-order traversal of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node, the value in the
 *        node must be passed as a parameter to this function
 *
 * Description: If tree or func is NULL, do nothing.
 *              Otherwise, recursively call binary_tree_postorder on the left
 *              subtree, then on the right subtree, and finally call func
 *              with the value of the current node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}