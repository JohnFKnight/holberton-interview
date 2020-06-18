#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "palindrome.h"

/**
 * makearray - make array from int
 * @hn: number
 * @list: empty array
 *
 * Return: full array
 */

/* int *makearray(listint_t *head, int *list) */
/* { */
/* 	int node = 0; */
/* 	listint_t *current = head; */
/* 	int *arr = list; */

/* 	while (current != NULL) */
/* 	{ */
/* 		arr[node] = current->n; */
/* 		node++; */
/* 		current = current->next; */
/* 	} */
/* 	return (arr); */
/* } */

/**
 * is_palindrome - see if unsigned
 * @n: integer
 * Return: 1 if yes, 0 if no
 */

int is_palindrome(unsigned long n)
{
	/* Make arr of n % 10. */
	/* Do like in 0x05-linked list palindrome: */
	/* REVERSE THE NUMBER THEN CHECK IF THEY'RE EQUAL!! */
	unsigned long num = n, rnum = 0;

	while (num != 0)
	{
		rnum = rnum * 10;
		rnum = rnum + num % 10;
		num = num / 10;
	}
	if (n == rnum)
		return 1;

	return 0;
}
