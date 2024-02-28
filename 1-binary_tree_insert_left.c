#include "binary_trees.h"

/**
 * CreateNewNode - create a new node
 * @value: the value to store in the new node
 *
 * Return: the created new node
 */
binary_tree_t *CreateNewNode(int value)
{
	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *newNode = CreateNewNode(value);

	newNode->parent = parent;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
	}
	parent->left = newNode;

	return (newNode);
}
