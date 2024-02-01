#include "binary_trees.h"

/**
 *  * binary_tree_node - creates a binary tree node
 *   * @parent: a pointer to the parent of the node to create
 *    * @value: of the new node
 *     *
 *      * Return: a pointer to the new node or null
 *       */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		binary_tree_t *new;

			new = malloc(sizeof(binary_tree_t));
				if (new == NULL)
							return (NULL);

					new->parent = parent;
						new->left = NULL;
							new->right = NULL;
								new->n = value;

									return (new);
}

