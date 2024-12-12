#include "binary_trees.h"

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: pointer to the root of the tree
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
