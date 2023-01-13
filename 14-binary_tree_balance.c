#include "binary_trees.h"

/**
 * binary_tree_height_x - finds tree height
 * @tree: where to find height
 * Return: tree height
 */
int binary_tree_height_x(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_x(tree->left);
	right_height = binary_tree_height_x(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - finds difference between left height
 * and right height of the tree
 * @tree: where to find balance
 * Return: 0 if in balance, positive if left>right, negative int if left<right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_x(tree->left) - binary_tree_height_x(tree->right));
}
