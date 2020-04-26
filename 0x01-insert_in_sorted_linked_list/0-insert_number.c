#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a new node in a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *prev;
	listint_t *current;

	current = *head;
	prev = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
		{
			/* Quit when found a higher number */
			if (current->n > number)
				break;
			else
			{
				/* Go to next node */
				prev = current;
				current = current->next;
			}
		}
		if (prev == *head)
		{
			/* Insert at top of list */
			new->next = current;
			*head = new;
			/* return (new); */
		}
		else if (current->next != NULL)
		{
			/* Insert in middle of list */
			new->next = current;
			prev->next = new;
		}
		else
		{
			/* Insert at end of list */
			new->next = NULL;
			current->next = new;
		}
	}
	return (new);
}
