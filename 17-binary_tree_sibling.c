#include "binary_trees.h"
/**
  * binary_tree_sibling - Finds the sibling of a node
  *
  * @node: Pointer to the sibling node
  *
  * Return: The sibling node or NULL
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left != node && node->parent->left)
		return (node->parent->left);
	else if (node->parent->right != node && node->parent->right)
		return (node->parent->right);
	else
		return (NULL);
}
