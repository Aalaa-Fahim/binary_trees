#include "binary_trees.h"
/**
 * tree_hight - function to fined hight of binary tree.
 * @tree: pointer to root node of a tree to measure.
 * Return: hight of a tree, 0 if NULL.
*/
int tree_hight(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
	{
		return (-1);
	}
	left_h = tree_hight(tree->left);
	right_h = tree_hight(tree->right);
	if (left_h > right_h)
	{
		return (1 + left_h);
	}
	else
	{
		return (1 + right_h);
	}
}
/**
 * binary_tree_balance - to measure balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null,Balance factor if success.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h, balance_factor;

	if (tree == NULL)
	{
		return (0);
	}
	left_h = tree_hight(tree->left);
	right_h = tree_hight(tree->right);
	if (left_h > right_h)
	{
		balance_factor = left_h - right_h;
		return (balance_factor);
	}
	else
	{
		balance_factor = right_h - left_h;
		return (balance_factor);
	}
}
