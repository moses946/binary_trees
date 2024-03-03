#include "binary_trees.h"

/**
  * binary_tree_inorder - Traverse a tree inorder
  *
  * @tree: Binary tree
  * @func: Pointer to a function
  *
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
