#include "binary_trees.h"

/**
 * binary_tree_depth - depth_t of a node in a binary tree
 * @tree: node to calculate the depth_t
 *
 * Return: depth_t of the node
 *         0 if tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_t = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth_t++;
		tree = tree->parent;
	}

	return (depth_t);
}
