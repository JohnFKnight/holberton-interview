#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *head = list;
	listint_t *current = head;

	while (current)
	{
		if (current->next == head)
			return (1);
		current = current->next;
	}
	return (0);
}
