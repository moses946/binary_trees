#include "binary_trees.h"
/**
  * binary_tree_height - Measures the height of a binary tree
  *
  * @tree: Binary tree
  *
  *  Return: Height of a binary tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lHeight, rHeight;


	if (tree == NULL)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	if (lHeight >= rHeight)
		return (lHeight);
	else
		return (rHeight);
}
