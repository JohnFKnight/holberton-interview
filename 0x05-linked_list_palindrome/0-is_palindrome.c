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
 * makearray - make array from linked list
 * @head: pointer to list
 * @list: empty array
 *
 * Return: full array
 */

int *makearray(listint_t *head, int *list)
{
	int node = 0;
	listint_t *current = head;
	int *arr = list;

	while (current != NULL)
	{
		arr[node] = current->n;
		node++;
		current = current->next;
	}
	return (arr);
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
	int *list, *arr;
	int mid = 0, mid2 = 0, i = 0;

	list = (int *)malloc(sizeof(int) * cnt);
	if (list == NULL)
		return (0);
	if (current == NULL)
		return (1);

	arr = makearray(current, list);
	mid = cnt / 2;
	if (cnt % 2 != 0)
	{
		i = 0;
		for (i = 1; i <= mid; i++)
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
		i = 0;
		for (i = 1; i < mid; i++)
		{
			if (arr[mid + i] != arr[mid2 - i])
				return (0);
		}
		return (1);
	}
	return (1);
}
