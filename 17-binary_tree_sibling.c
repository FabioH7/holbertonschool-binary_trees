#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL)
        return NULL;
    if (node->parent == NULL || node->parent->left == NULL || node->parent->right == NULL)
        return NULL;
    if (node->n == node->parent->left->n)
        return (node->parent->right);
    return (node->parent->left);
}