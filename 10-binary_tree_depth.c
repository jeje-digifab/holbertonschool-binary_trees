#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 *
 * This function uses a recursive approach to traverse the tree and
 * calculate the depth of each node. The depth of a node is defined as
 * the number of levels between that node and the root of the tree.
 *
 * If the input tree is NULL, the function returns 0, indicating that
 * the tree is empty. If the input tree is not NULL, the function checks
 * if the current node is the root of the tree. If it is, the depth is 0.
 * If it is not, the depth of the current node is 1 plus the depth of its
 * parent. The function calls itself recursively with the parent of the
 * current node until it reaches the root of the tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth  = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
	depth = binary_tree_depth(tree->parent);
	depth++;

	}
	return (depth);
}

