#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - finds the length of the longest branch of a tree
 * @tree: parent node of the tree
 * Return: 0 if tree is null or the length of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || tree->left == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
