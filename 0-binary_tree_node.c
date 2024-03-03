#include "binary_trees.h"

/**
  * binary_tree_node - Creates a binary tree node
  *
  * @parent: Parent node to the new node
  * @value: Value of the node
  *
  * Return: Pointer to the new node or NULL
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->left = malloc(sizeof(binary_tree_t));
	new_node->right = malloc(sizeof(binary_tree_t));
	new_node->parent = malloc(sizeof(binary_tree_t));
	if (!new_node || !new_node->left)
		return NULL;
	if (!new_node->parent || !new_node->right)
		return NULL;
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
