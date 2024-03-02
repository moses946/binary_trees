#include "binary_trees.h"

/**
  * binary_tree_postorder - Traverse a binary tree in postorder
  *
  * @tree: Binary tree
  * @func: Function to run
  *
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	//Traverse the left subtree
	binary_tree_postorder(tree->left, func);

	//Traverse the right subtree
	binary_tree_postorder(tree->right, func);

	//Run the function
	func(tree->n);
}
