#include "binary_trees.h"

/**
 *  * binary_tree_size - measures the size of a binary tree
 *   * @tree: the root node
 *    *
 *     * Return: 0  if root is null or |size|
 *      */
size_t binary_tree_size(const binary_tree_t *tree)
{
		int n = 0;

			if (tree == NULL)
						return (0);

				n += binary_tree_size(tree->left);
					n += binary_tree_size(tree->right);

						return (n + 1);
}

