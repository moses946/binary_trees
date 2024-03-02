#include "binary_trees.h"

/**
  * binary_tree_insert_left - Inserts a node as the left-child
  *
  * @parent: Parent node
  * @value: value
  *
  * Return: Pointer to new node or NULL.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return NULL;
	new_node = binary_tree_node(parent, value);
	if (parent->left)
		new_node->left = parent->left;
	parent->left = new_node;
	return new_node;
}
