#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a tree
 * @tree: node of which to find depth
 * Return: 0 if null or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	if (tree->parent != NULL)
		return (depth + 1);
	return (0);
}
