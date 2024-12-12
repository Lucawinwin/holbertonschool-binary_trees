#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hright = 0, hleft = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		hright = binary_tree_height(tree->right) + 1;
	if (tree->left)
		hleft = binary_tree_height(tree->left) + 1;

	if (hright > hleft)
		return (hright);
	else
		return (hleft);
}
