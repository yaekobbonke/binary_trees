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
	binary_tree_t *root;
	binary_tree_t *current;
	binary_tree_node = (binary_treei_t *)malloc(sizeof(binary_tree_t));
	binary_tree_node->n = value;
	binary_tree_node->left = NULL;
	binary_tree_node->right = NULL;

	return (binary_tree_node);

	if(root == NULL)
	{
		root = binary_tree_node;		 
	}
	while(current != NULL)
	{
		root = current;
		parent = root;
		if (n < current->n)
		{
			current = current->left;
		}
		else if (n > current->n)
		{
			current = current->right;
		}

	}
	if (n < parent->n)
	{
		parent->left = binary_tree_node;
	}
	else
	{
		parent->right = binary_tree_node;
	}
}
