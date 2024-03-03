#include "binary_trees.h"


/**
 * find_depth_left - Finds the depth of the leftmost leaf in a binary tree.
 *
 * @tree: A pointer to the tree to measure the leftmost depth.
 *
 * Return: The depth of the leftmost node.
 */
int find_depth_left(const binary_tree_t *tree)
{
    if (!tree->left)
        return 0;
    return 1 + find_depth_left(tree->left);
}

/**
 * isPerfect - Helper function to find if a binary tree is perfect.
 *
 * @tree: The current node being checked.
 * @depth: The depth of the leftmost leaf node.
 * @level: The current level in the tree (starts from 0 at the root).
 *
 * Return: If the tree is perfect, it returns 1. Otherwise, it returns 0.
 */
int isPerfect(const binary_tree_t *tree, int depth, int level)
{
    if (!tree->left && !tree->right)
        return depth == (level + 1);

    if (!tree->left || !tree->right)
        return 0;

    return isPerfect(tree->left, depth, level + 1) && isPerfect(tree->right, depth, level + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, it returns 1. Otherwise, it returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int depth;

    if (tree == NULL)
        return 0;

    depth = find_depth_left(tree);

    return isPerfect(tree, depth, 0);
}