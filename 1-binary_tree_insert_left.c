#include<stdio.h>
#include<stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that creates a left child
 * parent - a pointer pointing to parent node
 * value - a data to be stored in a new node
 *
 * return - a pointer to the created node, or NULL on failure or if parent is NULL 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}
