#include "binary_trees.h"
/**
  * balance - Recursive function to get number of child nodes in a direction
  *
  * @tree: Binary tree
  * @direction: Direction
  *
  * Return: Number of child nodes
  */
int balance(const binary_tree_t *tree, char *direction)
{
	int count;

	if (!tree)
		return (0);

	if (strcmp(direction), "left" == 0)
	{
		if (tree->left)
			return (1);
		count = balance(tree->left, "left");
	}
	else
	{
		if (tree->right)
			return (1);
		count = balance(tree->right, "right");
	}
	return (count);
}

/**
  * binary_tree_balance - Measures the balance factor of a binary tree
  *
  * @tree: Binary Tree
  *
  * Return: Balance factor of the tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lbFactor, rbFactor;

	if (!tree)
		return (0);
	lbFactor = balance(tree, "left");
	rbFactor = balance(tree, "right");

	if (lbFactor > rbFactor)
		return (lbFactor);
	else if (rbFactor > lbFactor)
		return (-rbFactor);
	else
		return (0);
}
