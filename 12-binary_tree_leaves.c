#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Description: This function recursively traverses a binary tree and counts
 *              the number of leaves. A leaf node is a node that has no
 *              children.
 *              If the tree is NULL, the function returns 0, as an empty tree
 *              has no leaves.
 *
 * Return: The number of leaves in the binary tree, or 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
