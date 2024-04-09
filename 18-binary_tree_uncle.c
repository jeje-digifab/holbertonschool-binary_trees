#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if node is NULL, has no parent,
 *         or no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent, *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent == NULL)
		return (NULL);

	if (node == grandparent->left)
		uncle = grandparent->right;
	else
		uncle = grandparent->left;

	return (uncle);
}
