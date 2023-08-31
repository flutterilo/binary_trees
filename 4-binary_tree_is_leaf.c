#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 * @node: node
 * Return: 0 if not left node or NULL else 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right);
}
