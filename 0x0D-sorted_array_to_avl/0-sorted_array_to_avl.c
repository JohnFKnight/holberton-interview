#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binary_trees.h"


/**
 * make_node - append new node into avl array
 * @parent: node parent
 * @data: node n
 *
 * Return: new node
 */

avl_t *make_node(avl_t *parent, int data)
{
	avl_t *node = malloc(sizeof(avl_t));

	node->n = data;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}


/**
 * sorted_array_to_avl - Make AVL from sorted array
 * @array: Pointer to sorted array
 * @size: Size of/# elements in sorted array
 *
 * Return: Pointer to AVL
 */


avl_t *sorted_array_to_avl(int *array, size_t size)
{
	/* 8/13/20. create root. L=create root/2. R=create root/2 */

	size_t right;
	avl_t *avl;

	avl = NULL;

	if (size > 0)
	{
		right = size / 2;
		if (size % 2 == 0)
			size = size / 2 - 1;
		else
			size = size / 2;

		avl = make_node(avl, array[size]);

		avl->left = sorted_array_to_avl(array, size);
		avl->right = sorted_array_to_avl(&array[size + 1], right);
	}
	return (avl);
}
