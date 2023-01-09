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
		size_t right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
		{
			return (left_height + 1);
		}
		else
		{
			if (tree ->right != NULL)
				return (right_height + 1);
		}
	}
	return 0;
}