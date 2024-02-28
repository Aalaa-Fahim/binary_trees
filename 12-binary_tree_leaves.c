#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_leaves - to count all leaves in a binary tree.
 * @tree: pointer to root node of a tree to count the number of leaves.
 * Return: 0 If tree == NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_no, right_no, leaves_no;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	left_no = binary_tree_leaves(tree->left);
	right_no = binary_tree_leaves(tree->right);
	leaves_no = left_no + right_no;
	return (leaves_no);
}
