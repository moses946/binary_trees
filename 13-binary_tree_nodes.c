#include "binary_trees.h"
/**
  * binary_tree_nodes - Counts nodes with atleast 1 child
  *
  * @tree: Binary tree
  *
  * Return: Number of nodes with a child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lcount, rcount;

	if (tree == NULL)
		return (0);

	lcount = binary_tree_nodes(tree->left);
	rcount = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (lcount + rcount + 1);
	else
		return (lcount + rcount)
}
