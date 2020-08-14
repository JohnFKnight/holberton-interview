#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binary_trees.h"


/**
 * make_node - append new node into avl array
 * @dest: destination array
 * @src: source array
 * @idx: index of arr to be added
 *
 * @parent: node parent
 * @data: node n
 *
 * Return: modified destination array
 */

/* int *make_avl(int *dest, int *src)   /\* , int idx) *\/ */
avl_t *make_node(avl_t *parent, int data)
{
	avl_t *node = malloc(sizeof(avl_t));
	node->n = data;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
	/* return (memcpy(dest, src, sizeof(int))); */
}

/**
 * subarray - create new array, left and right
 * @dest: l/r destination array
 * @src: source array
 * @start: 1st index of arr to be added
 * @end: last index of arr to be added
 *
 * Return: modified destination array
 */

/* int *subarray(int *dest, int *src, int start, int end) */
/* { */
/* 	return (memcpy(dest, src, (end - start) * sizeof(int))); */
/* } */

/**
 * sorted_array_to_avl - Make AVL from sorted array
 * @array: Pointer to sorted array
 * @size: Size of/# elements in sorted array
 *
 * Return: Pointer to AVL
 */


avl_t *sorted_array_to_avl(int *array, size_t size)
{
	/* Do binary search: */
	/* Each mid-left, mid-right is child/parent */
	/* BST: child-l < parent < child-r */
	/* Ignore grandchildren */
	/* If size is odd: size of l, r = mid */
	/* else: size l = mid; size r = mid - 1 */

	/* 8/13/20. create root. L=create root/2. R=create root/2 */

	size_t right;
	/* int *avl = 0, *l = 0, *r = 0; */
	avl_t *avl;
	/* avl_t *parent; */

	/* parent = NULL; */
	avl = NULL;
	/* mid = size; */

	if (size > 0)
	{
		right = size / 2;
		if (size % 2 == 0)
		{
			size = size / 2 - 1;
		}
		else
		{
			size = size / 2;
		}
		avl = make_node(avl, array[size]);

		/* mid = size; */
		/* printf("mide %lu. size %lu \n", mid, size); */
		/* avl = make_avl(array[mid]);  /\* avl, array); *\/   /\* , mid); *\/ */
		/* l = subarray(l, array, 0, mid - 1); */
		/* avl->parent = sorted_array_to_avl(array, mid); */
		avl->left = sorted_array_to_avl(array, size);   /* size / 2 -  1); */
		/* r = subarray(r, array, mid + 1, size - 1); */
		/* if (size % 2 != 0) */
		avl->right = sorted_array_to_avl(&array[size + 1], right);
		/* else */
		/* 	avl->right = sorted_array_to_avl(array, mid - 1); */
	}
	/* binary_tree_print(avl); */
	return (avl);
}
