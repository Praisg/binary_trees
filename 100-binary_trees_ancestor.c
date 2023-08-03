#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: a ptr to the first node to find the ancestor
 * @second: a ptr to the second node to find the ancestor
 *
 * Return: ptr to the ancestor node
 *         NULL if there is no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_frst, depth_sec;

	if (!first || !second)
		return (NULL);

	depth_frst = binary_tree_depth(first); = binary_tree_depth(second);

	while (depth_frst )
	{
		first = first->parent;
		depth_frst--;
	}
	while > depth_frst)
	{
		second = second->parent;
--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth 
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
