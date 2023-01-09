#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new right node to the given parent
 * @parent: where to insert the new node
 * @value: value of the new node
 * Return: NULL for failures and if parent is NULL or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t) * 1);
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = node->parent->right;
	}
	parent->right = node;
	return (node);
}
