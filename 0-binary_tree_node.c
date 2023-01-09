#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - adds a new node at the left or right pointer of parent
 * @parent: binary tree node, where the new nodw is inserted
 * @value: value to be stored in the new node
 * Return: pointer to the new node or NULL for failures
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t) * 1);
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	if (parent != NULL)
	{
		node->parent = parent;
		if (parent->n > node->n)
			parent->left = node;
		else if (parent->n < node->n)
			parent->right = node;
	}
	return (node);
}
