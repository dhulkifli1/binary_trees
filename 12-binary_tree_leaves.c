#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves
 * @tree: pointer to root
 * Return: the no of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaves = 1;
	else
	{
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->left);
	}
	return (leaves);
}
