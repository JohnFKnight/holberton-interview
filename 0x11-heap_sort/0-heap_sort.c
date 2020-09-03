#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* i = index to current node; */
/* iParent(i) = floor((i-1) / 2); */
/* iLeftChild(i)  = 2*i + 1; */
/* iRightChild(i) = 2*i + 2; */


/**
 * siftDown - sift elements down
 * @a: array to sort
 * @start: beginning index
 * @end: ending index
 *
 * Return: array?
 */

void siftDown(int *a, int start, int end)
{
	printf("IN SIFTDOWN\n");
	int b, swap, child;
	int root = start;
	int child_l = 2 * root + 1;
	/* int child_r = child_l + 1; */

	while (child_l <= end)
	{
		child = child_l;
		swap = root;

		if (a[swap] < a[child])
			swap = child;
		if ((child + 1) <= end && a[swap] < a[child + 1])
			swap = child + 1;
		if (swap == root)
		{
			return;
		}
		else
		{
			/* swap(a[root], a[swap]); */
			b = a[root];
			a[root] = a[swap];
			a[swap] = b;
			root = swap;
		}
	}
}

/**
 * heapify - create sorted heap array
 * @a: array to sort/heapify
 * @count: number of elements in a
 *
 * Return: array?
 */
void heapify(int *a, size_t count)
{
	int start, parent;
	int size = (int)count;
	int last = size - 1;

	/* start at the end */
	/* if idx % 2 != 0 => left, else right */
	/* so if size is even , last node is right, else left */
	/* Find last parent from last node */
	if (last % 2 == 0)
	{
		parent = (last - 2) / 2;
	}
	else
	{
		parent = (last - 1) / 2;
	}
	start = parent;

	while (start >= 0)
	{
		printf("IN HEAPIFY\n");
		siftDown(a, start, size - 1);
		start--;
	}
}

/**
 * heap_sort - sort array using heap sort
 * @array: array to sort
 * @size: number of array elements
 *
 * Return: Always 0
 */
void heap_sort(int *array, size_t size)
{
	size = (int)size;
	int b, end = 0;
	/* int end = int(size) */

	heapify(array, size);
	end = size - 1;
	printf("END %d, SIZE %lu\n", end, size);
	while (end > 0)
	{
		printf("IN WHILE LOOP IN HEAP SORT\n");
		/* printf("%ls\n", array); */
		/* swap(array[end], array[0]); */
		b = array[end];
		array[end] = array[0];
		array[0] = b;
		end--;
		siftDown(array, 0, end);
		printf("done sifting in heap sort\n");
	}
}
