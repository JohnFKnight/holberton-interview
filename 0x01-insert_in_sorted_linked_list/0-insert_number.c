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
			/* printf("in while loop %i \n", current->n); */
			if (current->n > number)
				break;
			else
			{
				/* printf("if current < num\n"); */
				prev = current;
				current = current->next;
			}
		}
		if (prev == *head)
		{
			/* printf("prev is NULL %i. \n", prev->n); */
			new->next = current;
			*head = new;
			/* return (new); */
		}
		else if (current->next != NULL)
		{
			new->next = current;
			prev->next = new;
			/* return (new); */
		}
		/* } */
		else
		{
			new->next = NULL;
			current->next = new;
		}
	}
	return (new);
}
