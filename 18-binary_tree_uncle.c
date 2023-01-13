#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: node of which to find sibling
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

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: node which needs its uncle to be found
 * Return: uncle node or NULL if not found
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
