#include "binary_trees.h"

/**
 *  * binary_tree_insert_left - inserts a new node to the left of a parent
 *   * @parent: of the new node
 *    * @value: to add to the left child
 *     *
 *      * Return: a pointer to the newly created node
 *       */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *new;

			if (parent == NULL)
						return (NULL);

				new = malloc(sizeof(binary_tree_t));
					if (new == NULL)
								return (NULL);

						new->n = value;
							new->right = NULL;
								new->parent = parent;

									if (parent->left)
											{
														new->left = parent->left;
																parent->left->parent = new;
																	}
										else
													new->left = NULL;

											parent->left = new;

												return (new);
}

