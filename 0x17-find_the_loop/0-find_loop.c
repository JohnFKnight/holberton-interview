#include <stdio.h>
#include "lists.h"


/**
 * get_loop - Find loop node from find_listint_loop
 *
 * @node: node where loop was found
 * @list: the pointer to the head of the list
 *
 * Return: loop node
 */
listint_t *get_loop(listint_t *node, listint_t *list)
{
	listint_t *nptr;
	listint_t *lptr;

	lptr = list;
	while (1)
	{
		nptr = node;
		while (nptr->next != node && nptr->next != lptr)
			nptr = nptr->next;
		if (nptr->next == lptr)
			return (nptr->next);
		lptr = lptr->next;
	}
	return (NULL);
}

/**
 * find_listint_loop - Find the node where a loop starts
 *
 * @head: the pointer to the head of the list
 *
 * Return: loop node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow->next)
	{
		slow = slow->next;

		if (fast->next != NULL)
			fast = fast->next->next;
		else
			return (0);

		if (slow == NULL || fast == NULL)
			return (0);
		if (slow == fast)
			return (get_loop(slow, head));
	}

	return (NULL);
}
