#include "binary_trees.h"

/**
 * createNewNode - create a new node
 * @value: the value to store in the new node
 *
 * Return: the created new node
 */
binary_tree_t *createNewNode(int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
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
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}

/**
 * freeNode - frees the memory allocated for the node
 * @node: the taken node
 */
void freeNode(binary_tree_t *node)
{
	if (node == NULL)
		return;
	freeNode(node->left);
	freeNode(node->right);
	free(node);
}
