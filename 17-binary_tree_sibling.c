#include "binary_trees.h"

/**
 * binary_tree_sibling - finds if a node has a sibling
 * @node: node to search if it has a sibling
 * Return: sibling node or NULL if not found
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->left == NULL
	|| node->parent->right == NULL)
		return (NULL);
	if (node->n == node->parent->left->n)
		return (node->parent->right);
	return (node->parent->left);
}
