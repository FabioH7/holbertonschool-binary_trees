#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t  right_height = binary_tree_height(tree->right);

		size_t count = left_height + right_height;
		return (count + 1);
	}
	return 0;
}
