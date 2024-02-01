#include "binary_trees.h"

/**
 *  * find_max - the max of 2 numbers
 *   * @a: n1
 *    * @b: n2
 *     *
 *      * Return: the macx of 2
 *       */
int find_max(int a, int b)
{
		if (a >= b)
					return (a);
			else
						return (b);
}

/**
 *  * get_height - returns the eight of the tree
 *   * @tree: to measure
 *    *
 *     * Return: height or 0
 *      */
size_t get_height(const binary_tree_t *tree)
{
		size_t height;

			if (tree == NULL)
						return (0);

				height = find_max(get_height(tree->left), get_height(tree->right));

					return (height + 1);
}

/**
 *  * binary_tree_height - finds the height of the tree
 *   * @tree: to measure
 *    *
 *     * Return: height or 0
 *      */
size_t binary_tree_height(const binary_tree_t *tree)
{
		return (get_height(tree) - 1);
}

