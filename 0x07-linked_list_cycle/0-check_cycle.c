#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *head = list;
	listint_t *current = head;
	listint_t *slow = list, *fast = list;

	while (current)
	{
		slow = slow->next;

		if (fas.next != NULL)
			fast = fast->next->next;
		else
			return (0);

		if (slow == null || fast == null)
			return (0);
		if (slow == fast)
			return (1);
	}
	/* return (0); */
}
