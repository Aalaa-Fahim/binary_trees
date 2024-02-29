#include "binary_trees.h"
/**
 * binary_tree_node - function to create binary tree node
 * @parent: a pointer to the parent node of the node to create.
 * @value:is the value to put in the new node.
 * Return: pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeNew;
	
	nodeNew = malloc(sizeof(binary_tree_t));
	if (nodeNew == NULL)
	{
		free(nodeNew);
		return (NULL);
	}
	nodeNew->parent = parent;
	nodeNew->left = NULL;
	nodeNew->right = NULL;
	nodeNew->n = value;
	return (nodeNew);
}
