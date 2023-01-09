#include "binary_trees.h"
int binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
    {
        int left_height = binary_tree_height(tree->left);
        int right_height = binary_tree_height(tree->right);
        if (left_height >= right_height)
            return (left_height + 1);
        else
            return (right_height + 1);
    }
    return 0;
}
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    return (binary_tree_height(tree->left));
}
