#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		int depth = binary_tree_depth(tree->parent);

		if (tree->parent != NULL)
			return(depth + 1);
	}
	return (0);
}
