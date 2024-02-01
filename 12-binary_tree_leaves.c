#include "binary_trees.h"

/**
 *  * binary_tree_leaves - counts the leaves in a binary tree
 *   * @tree: the root node of the tree
 *    *
 *     * Return: no of leaves or 0 if Null
 *      */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
		int leaves = 0;

			if (tree == NULL)
						return (0);

				if (tree->left == NULL && tree->right == NULL)
							leaves = 1;
					else
							{
										leaves += binary_tree_leaves(tree->left);
												leaves += binary_tree_leaves(tree->right);
													}

						return (leaves);
}

