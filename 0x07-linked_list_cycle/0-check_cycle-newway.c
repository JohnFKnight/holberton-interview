#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *head = list;
	listint_t *current = head;
	listint_t *slow = head, *fast = head;

	while (current)
	{
		slow = slow->next;

		if (fast->next != NULL)
			fast = fast->next->next;
		else
			return (0);

		if (slow == NULL || fast == NULL)
			return (0);
		if (slow == fast)
			return (1);
	}
	return (0);
}
