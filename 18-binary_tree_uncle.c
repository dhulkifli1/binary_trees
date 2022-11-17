#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node
 * NULL if node is null or uncle doesnt exist
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent->parent != NULL)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		return (node->parent->parent->left);
	}
	return (NULL);
}
