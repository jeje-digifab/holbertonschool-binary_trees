#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if node is NULL, has no parent,
 *         or no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent, *sibling;

    if (node == NULL || node->parent == NULL)
        return (NULL);

    parent = node->parent;

    if (parent->left == node)
        sibling = parent->right;
    else
        sibling = parent->left;

    return sibling;
}
