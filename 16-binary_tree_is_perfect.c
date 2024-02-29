#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 * Return: 0 If tree is NULL , 1 if tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		if ((!tree->left->left && !tree->left->right) &&
		(!tree->right->left && !tree->right->left))
		{
			return (1);
		}
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))
	{
		return (1);
	}
	return (0);
}
