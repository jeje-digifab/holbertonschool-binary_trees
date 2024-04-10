#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Description: If tree is NULL, your function must return 0
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		l += binary_tree_is_perfect(tree->left);
	}

	if (tree->right != NULL)
	{
		r += binary_tree_is_perfect(tree->right);
	}

	if (l == r)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
