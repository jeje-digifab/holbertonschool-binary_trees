#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary
 *                     tree.
 * @tree: A pointer to the root node of the tree to count nodes.
 *
 * Return: The number of nodes with at least one child, or 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (0);
}
