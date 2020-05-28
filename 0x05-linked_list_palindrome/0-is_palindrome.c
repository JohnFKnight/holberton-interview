#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listlen - find length of linked list
 * @head: pointer to list to be counted
 *
 * Return: length
 */

int listlen(listint_t *head)
{
	listint_t *current = head;
	int cnt = 0;

	while (current != NULL)
	{
		cnt++;
		current = current->next;
	}
	return (cnt);
}

/**
 * is_palindrome - see if a list is a palindrome
 * @head: pointer to list to be freed
 * Return: 0 if no, 1 if yes
 */

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int cnt = listlen(current);
	int arr[cnt];
	int mid = 0, mid2 = 0, node = 0;

	if (current == NULL)
		return (1);
	while (current != NULL)
	{
		arr[node] = current->n;
		node++;
		current = current->next;
	}
	mid = cnt / 2;
	if (cnt % 2 != 0)
	{
		for (int i = 1; i <= mid; i++)
		{
			if (arr[mid + i] != arr[mid - i])
				return (0);
		}
		return (1);
	}
	if (cnt % 2 == 0)
	{
		mid2 = mid - 1;
		if (arr[mid] != arr[mid2])
		{
			return (0);
		}
		for (int i = 1; i < mid; i++)
		{
			if (arr[mid + i] != arr[mid2 - i])
				return (0);
		}
		return (1);
	}
	return (1);
}
