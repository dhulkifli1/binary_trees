#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to root
 * Return: the no of one child nodes
 *         0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int one_child_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		one_child_nodes += 1;
	else
	{
        one_child_nodes += 0;
		one_child_nodes += binary_tree_nodes(tree->left);
		one_child_nodes += binary_tree_nodes(tree->right);
	}
	return (one_child_nodes);
}
