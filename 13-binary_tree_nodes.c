#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the nodes
 *
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int count = 0;
if (tree == NULL)
{
	return (0);
}

if (tree->left != NULL || tree->right != NULL)
{
	count++;
}

count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);

return (count);
}
