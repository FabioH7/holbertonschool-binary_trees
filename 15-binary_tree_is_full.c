#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if node in tree has both next pointers
 * @tree: tree to check
 * Return: 1 if yes and 0 if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag1, flag2;

	if (tree == NULL)
		return (0);
	flag1 = binary_tree_is_full(tree->left);
	flag2 = binary_tree_is_full(tree->right);
	if (flag1 == flag2)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (0);
}
