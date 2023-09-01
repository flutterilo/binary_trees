#include "binary_trees.h"

/**
 * binary_tree_uncle - gets the uncle of a givin node
 * @node: the binary tree node to get it uncle
 * Return: the uncle node on success else null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
