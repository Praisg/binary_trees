#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: ptr to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         NULL if node =NULL
 *         NULL if the parent = NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
