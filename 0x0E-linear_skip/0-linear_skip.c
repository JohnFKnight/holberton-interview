#include <stdio.h>
#include <stdlib.h>
#include "search.h"


/**
 * linear_skip - linear skip list
 * @list: list with express lane
 * @value: value to search for
 *
 * Return: pointer to found node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;
	skiplist_t *skip = list;

	if (list == NULL || !value)
		return (NULL);
	for (node = skip; node; node = node->express)
	{
		if (value < node->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       list->index, node->index);
			while (list->index <= node->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
				if (value == list->n)
					return (list);
				list = list->next;
			}
		}
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}
	return (NULL);
}
