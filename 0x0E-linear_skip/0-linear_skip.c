#include <stdlib.h>
#include <stdio.h>
#include "search.h"

void free_skiplist(skiplist_t *list);

/**
 * linear_skip - Find value in express lane of the linked list
 *
 * @list: Pointer to the head node of the list
 * @value: Number to search nodes in the list
 *
 * Return: pointer to found node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	/* const size_t step = sqrt(size); */
	/* size_t i; */
	skiplist_t *current;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		      current->express->index, current->express->n);
		if (current == list && value < current->n)
			return (NULL);
		if (value >= current->n && value <= current->express->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			      current->index, current->express->index);
			while (current->index <= current->express->index)
			{
				if (value == current->n)
					return (current);
				/* printf("check #2\n"); */
				printf("Value checked at index [%lu] = [%d]\n",
				       current->index, current->n);
				/*
				 *printf("idx1 %lu. idx2 %lu \n",
				 * current->index, current->next->index);
				 */
				current = current->next;
			}
		}
		current = current->express;
	}
	return (NULL);
}
