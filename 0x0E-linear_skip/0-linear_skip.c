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
	skiplist_t *last;

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
			last = current->express;
			while (current->next && (current->index <= last->index))
			{
				if (value == current->n)
					return (current);
				printf("Value checked at index [%lu] = [%d]\n",
				       current->index, current->n);
				current = current->next;
			}
			return (NULL);
		}
		current = current->express;
	}
	last = current;
	while (current->next)
		current = current->next;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       last->index, current->index);
	current = last;
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
