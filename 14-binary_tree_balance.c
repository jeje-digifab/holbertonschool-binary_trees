#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		l = binary_tree_balance(tree->left) + 1;
	}

	if (tree->right != NULL)
	{
		r = binary_tree_balance(tree->right) + 1;
	}

	if (!tree->left && !tree->right)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		return (-1 - binary_tree_balance(tree->right));
	}

	if (tree->right == NULL)
	{
		return (1 + binary_tree_balance(tree->left));
	}
	return (l - r);
}
