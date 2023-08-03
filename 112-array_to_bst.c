#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: ptr to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: A ptr to the root node of the created BST
 *         NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int y;
	bst_t *root = NULL;

	for (y = 0; y < size; y++)
		bst_insert(&root, array[y]);

	return (root);
}
