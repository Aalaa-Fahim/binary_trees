#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - function to measure depth of node in binary tree.
 * @tree: pointer to the node to measure the depth
 * Return: 0 If tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		deep++;
	}
	return (deep);
}
