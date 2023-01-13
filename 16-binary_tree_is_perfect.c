#include "binary_trees.h"

/**
 * binary_tree_height_l - finds height of a tree
 * @tree: where to find height
 * Return: tree height or 0 if tree is null
 */

int binary_tree_height_l(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_l(tree->left);
	right_height = binary_tree_height_l(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * _binary_tree_is_full - finds if tree is full
 * @tree: tree to find if its full
 * Return: 1 if yes else 0
 */

int _binary_tree_is_full(const binary_tree_t *tree)
{
	int flag1, flag2;

	if (tree == NULL)
		return (0);
	flag1 = _binary_tree_is_full(tree->left);
	flag2 = _binary_tree_is_full(tree->right);
	if (flag1 == flag2)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (0);
}

/**
 * _binary_tree_size - finds size of binary tree
 * @tree: where to find size
 * Return: size or 0 if tree is null
 */

int _binary_tree_size(const binary_tree_t *tree)
{
	int count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = _binary_tree_size(tree->left);
	count_r = _binary_tree_size(tree->right);
	return (count_l + count_r + 1);
}

/**
 * binary_tree_is_perfect - finds if a tree is perfect
 * @tree: tree to finnd if its perfect
 * Return: 1 if yes else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	int left_full, right_full, left_size, right_size;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_l(tree->left);
	right_height = binary_tree_height_l(tree->right);
	left_full = _binary_tree_is_full(tree->left);
	right_full = _binary_tree_is_full(tree->right);
	left_size = _binary_tree_size(tree->left);
	right_size = _binary_tree_size(tree->right);
	if (left_full == right_full && left_height == right_height
	&& left_size == right_size)
		return (1);
	return (0);
}
