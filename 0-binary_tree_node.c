#include<stdio.h>
#include "binary_trees.h"
#include<stdlib.h>
/**
 * binary_tree_node - a pointer to function to creat a node
 * @parent - a pointer to newly created node
 * @value - data to be inserted
 * return - returns binary_tree_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	new_node->n = value;

	return (new_node);
}
