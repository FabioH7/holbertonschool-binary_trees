#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the number of leaves in a tree
 * @tree: where to count the leaves
 * Return: 0 if none or the leaves total number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = binary_tree_leaves(tree->left);
	count_r = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (count_l + count_r + 1);
	return (count_l + count_r);
}
