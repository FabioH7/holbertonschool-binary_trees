#include "binary_trees.h"
#include <stddef.h>
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	else
	{
		size_t count_l = binary_tree_size(tree->left);
		size_t count_r = binary_tree_size(tree->right);
		return (count_l + count_r + 1);
	}
	return 0;
}
