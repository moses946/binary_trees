#include "binary_trees.h"
/**
  * binary_tree_height - Measures the height of a binary tree
  *
  * @tree: Binary tree
  *
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	else
	{
		int lHeight, rHeight;

		lHeight = binary_tree_height(tree->left);
		rHeight = binary_tree_height(tree->right);

		if (lHeight >= rHeight)
			return (lHeight + 1);
		else
			return (rHeight + 1);
	}
}
