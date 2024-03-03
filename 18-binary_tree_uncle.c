#include "binary_trees.h"
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
	return (binary_tree_sibling(node->parent));
}
