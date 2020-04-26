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

	// prev = malloc(sizeof(listint_t));
	// if (prev == NULL)
	// 	return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

    new->n = number;
	// new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)  // && current->n < number)
        {
            printf("current if %i \n", current->n);
            if (current->n < number)
            {
                prev = current;
        		current = current->next;
            }
            else
            {
                printf("current else %i \n", current->n);
                new->next = current;
                prev->next = new;
		        // current->next = new;
                // current = new;
            }
        printf("current while %i \n", current->n);
        }
        if (current->next == NULL)
        {
            new->next = NULL;
            prev->next = new;

        }
	}
	return (new);
}
