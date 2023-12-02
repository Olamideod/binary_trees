#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in the binary tree.
 * @tree: A pointer to the node that measures the depth.
 *
 * Return: If tree is NULL function will return 0, otherwise return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
