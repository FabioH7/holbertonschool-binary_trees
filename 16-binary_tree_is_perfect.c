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

int _binary_tree_is_full(const binary_tree_t *tree)
{
    int flag1, flag2;

    if (tree == NULL)
        return (0);
    else
    {
        flag1 = _binary_tree_is_full(tree->left);
        flag2 = _binary_tree_is_full(tree->right);
        if (flag1 == flag2)
            return 1;
        if (tree->left != NULL && tree->right != NULL)
            return (0);
        else if (tree->left == NULL && tree->right == NULL)
            return (0);
    }
    return 0;
}

int _binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    int count_l = _binary_tree_size(tree->left);
    int count_r = _binary_tree_size(tree->right);
    return (count_l + count_r + 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left_full, right_full, left_size, right_size;

    if (tree == NULL)
        return (0);
    left_height = binary_tree_height_l(tree->left);
    right_height = binary_tree_height_l(tree->right);
    left_full = _binary_tree_is_full(tree->left);
    right_full = _binary_tree_is_full(tree->right);
    left_size = _binary_tree_size(tree->left);
    right_size = _binary_tree_size(tree->right);
    if (left_full == right_full && left_height == right_height && left_size == right_size)
    {
        return (1);
    }
    return (0);
}
