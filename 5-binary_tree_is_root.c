#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root node
 * @node: the node
 * Return: 1 if a node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
