#include "binary_trees.h"

/**
  * binary_tree_delete - Function that deletes a binary tree
  *
  * @tree: Tree to delete
  *
  */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return;

	left = tree->left;
	right = tree->right;
	if (parent)
		free(tree->parent);
	free(tree->left);
	free(tree->right);
	free(tree);
}
