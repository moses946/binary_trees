#include "binary_trees.h"
/**
  * binary_tree_sib - Finds the sibling of a node
  *
  * @node: Pointer to the sibling node
  *
  * Return: The sibling node or NULL
  */
binary_tree_t *binary_tree_sib(binary_tree_t *node)
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
/**
  * binary_tree_uncle - Finds the uncle of a node
  *
  * @node: Pointer to a node
  *
  * Return: Pointer to uncle node or NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	return (binary_tree_sib(node->parent));
}
