#include "binary_trees.h"

int binary_tree_height_l(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        int left_height = binary_tree_height_l(tree->left);
        int right_height = binary_tree_height_l(tree->right);
        if (left_height >= right_height)
            return (left_height + 1);
        else
            return (right_height + 1);
    }
    return 0;
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

    if (tree == NULL)
        return (0);
    left_height = binary_tree_height_l(tree->left);
    right_height = binary_tree_height_l(tree->right);
    if (left_height == right_height)
    {
        return (1);
    }
    return (0);
}
