#include "binary_trees.h"

int binary_tree_height_l(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        int left_height = binary_tree_height_l(tree->left);
        return (left_height + 1);
    }
    return 0;
}
int binary_tree_height_r(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {

        int right_height = binary_tree_height_r(tree->right);
        return (right_height + 1);
    }
    return 0;
}
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    return (binary_tree_height_l(tree) - binary_tree_height_r(tree));
}
