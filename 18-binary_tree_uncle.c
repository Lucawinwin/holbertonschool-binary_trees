#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: reference node
 *
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if ((!node) || (!node->parent) || (!node->parent->parent))
		return (NULL);

	grandparent = node->parent->parent;

	if (node->parent == grandparent->left)
		return (grandparent->right);

	return (grandparent->left);
}
