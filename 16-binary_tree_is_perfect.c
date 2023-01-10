#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);
    if (left_height == right_height)
    {
        return (1);
    }
    return (0);
