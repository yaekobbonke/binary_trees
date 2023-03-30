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
	binary_tree_node = (binary_treei_t *)malloc(sizeof(binary_tree_t));
	binary_tree_node->n = value;
	binary_tree_node->left = NULL;
	binary_tree_node->right = NULL;

	return (binary_tree_node);

	if(parent == NULL)
	{
		parent = binary_tree_node;		 
	}
	else if (n < parent->n)
	{
		parent = parent->left;
	}
	else
	{
		parent = parent->right;
	}
}
