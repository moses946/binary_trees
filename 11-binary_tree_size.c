#include "binary_trees.h"
/**
  * binary_tree_size - Measures the size of a binary tree
  *
  * @tree: Binary tree
  *
  * Return: The size of the binary tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lSize, rSize;

	if (!tree)
		return 0;
	else
	{
		lSize = binary_tree_size(tree->left);
		rSize = binary_tree_size(tree->right);

		return (lSize + rSize + 1);
	}
}
