#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - to finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 * Return: pointer to the uncle node on success.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node->parent == NULL || node == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
