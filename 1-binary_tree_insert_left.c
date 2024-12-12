#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node into a tree under the parents left
 * @parent: the parent
 * @value: the n value of the node
 * Return: a ptr to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}
	parent->left = newnode;

	return (newnode);
}
