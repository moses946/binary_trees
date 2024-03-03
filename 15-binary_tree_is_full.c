#include "binary_trees.h"
/**
  * binary_tree_is_full - checks if a binary tree is full
  *
  * @tree: Binary tree
  *
  * Return: 1 if tree is full otherwise 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);
	left = tree->left;
	right = tree->right;

	if (!left && !right)
		return (1);
	if (left && right)
		return (binary_tree_is_full(left) && binary_tree_is_full(right));

	return (0);
}
