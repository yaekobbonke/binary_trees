#include<stdio.h>
#include "binary_trees.h"
#include<stdlib.h>
/**
 * binary_tree_t *binary_tree_node - a pointer to function to creat a node
 *
 * return - returns binary_tree_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent =(binary_tree_t*)malloc(sizeof(binary_tree_t));
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;

	return (parent);
}
