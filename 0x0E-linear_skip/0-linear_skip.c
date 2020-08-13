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
	skiplist_t *current;
	skiplist_t *last_express;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		      current->express->index, current->express->n);
		if (current == list && value < current->n)
			return (NULL);
		if ((value >= current->n && value <= current->express->n))
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			      current->index, current->express->index);
			while (current->next)
			{
				if (value == current->n)
					return (current);
				printf("Value checked at index [%lu] = [%d]\n",
				       current->index, current->n);
				current = current->next;
			}
		}
		current = current->express;
	}
	last_express = current;
	while (current->next)
		current = current->next;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       last_express->index, current->index);
	current = last_express;
	while (current->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		current = current->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
	       current->index, current->n);
	return (NULL);
}
