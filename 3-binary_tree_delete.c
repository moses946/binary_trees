#include "binary_trees.h"

/**
  * binary_tree_delete - Function that deletes a binary tree
  *
  * @tree: Tree to delete
  *
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = NULL;
		else if (tree->parent->right == tree)
			tree->parent->right = NULL;
	}
	free(tree);
}
