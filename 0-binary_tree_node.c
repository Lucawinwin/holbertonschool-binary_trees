#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node into a binary tree
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: a ptr to the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
