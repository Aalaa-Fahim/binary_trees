#include "binary_trees.h"
/**
 * binary_tree_postorder - function to  post-order traversal a binary tree.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: void function returns nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
