#include "binary_trees.h"

/**
 * binary_tree_preorder - performs pre-order traversal of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node, the value in the
 *        node must be passed as a parameter to this function
 *
 * Description: If tree or func is NULL, do nothing.
 *              Otherwise, call func with the value of the current node,
 *              then recursively call binary_tree_preorder on the left
 *              subtree, and then on the right subtree.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);

	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}