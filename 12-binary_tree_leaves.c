#include "binary_trees.h"
/**
  * binary_tree_leaves - Count the number of leaves
  *
  * @tree: Binary Tree
  *
  * Return: Number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return 0;
	if (!tree->left && !tree->right)
		return 1;
	else
		binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
