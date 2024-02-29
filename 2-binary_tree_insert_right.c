#include "binary_trees.h"
/**
 * binary_tree_insert_right - to inserts a node as the right-child
 * of another node
 * @parent: a pointer to the parent node of the node to create.
 * @value:is the value to put in the new node.
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_r;

	if (parent == NULL)
	{
		return (NULL);
	}

	node_r = malloc(sizeof(binary_tree_t));

	if (node_r == NULL)
	{
		return (NULL);
	}
	node_r->n = value;
	node_r->parent = parent;
	node_r->left = NULL;
	node_r->right = NULL;

	if (parent->right != NULL)
	{
		node_r->right = parent->right;
		parent->right->parent = node_r;
	}
	parent->right = node_r;

	return (node_r);
}
