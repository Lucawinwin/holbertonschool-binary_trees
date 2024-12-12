#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *leftchild, *rightchild;

	if (tree == NULL)
		return (0);

	leftchild = tree->left;
	rightchild = tree->right;

	/* check if leaves on each side are same level */
	if (binary_tree_height(leftchild) != binary_tree_height(rightchild))
		return (0);
	/* if we reach the leaves */
	if (leftchild == NULL && rightchild == NULL)
		return (1);
	/* if we reach a node with only 1 child */
	if (leftchild == NULL || rightchild == NULL)
		return (0);
	/* else continue recursion */
	if (binary_tree_is_perfect(leftchild) && binary_tree_is_perfect(rightchild))
		return (1);
	return (0);
}

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
