#include "binary_trees.h"
/**
  * binary_tree_depth - Measure the depth of node
  *
  * @tree: Binary tree
  *
  * Return: Depth of the binary tree node
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int nDepth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	nDepth = binary_tree_depth(tree->parent);

	return (nDepth + 1);
}
