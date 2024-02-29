#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 * Return: pointer to the sibling node on success, NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr_left = NULL;
	binary_tree_t *ptr_right = NULL;

	if ( node->parent == NULL || node == NULL)
	{
		return (NULL);
	}
	ptr_left = node->parent->left;
	ptr_right = node->parent->right;

	if (ptr_left == node)
	{
		return (ptr_right);
	}
	else if (ptr_right == node)
	{
		return (ptr_left);
	}
	else
		return (NULL);
}
