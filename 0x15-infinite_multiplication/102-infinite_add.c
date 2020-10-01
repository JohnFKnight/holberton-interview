#include "holberton.h"
#include <stdio.h>

int size_of(char *);


/**
 * infinite_add  - add two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r:  buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *n11 = n1;
	char *n22 = n2;
	char *rr = r;
	int size = size_r;
	/* char temp_res[size + 1]; */
	int sz1;
	int sz2;
	/* int i = 0; */
	int sum = 0;
	int carry = 0;

	/**
	 * If either n is bigger than size_r return (0);
	 * If the sum is bigger than size_r return (0);
	 */

	/* printf("n1, n2, r, size_r %p, %p, %p, %d\n", n1, n2, r, size_r); */

	sz1 = size_of(n11); /* account for last null char byte */
	sz2 = size_of(n22); /* ditto */
	size--; /* ditto */
	/* printf("sz1, sz2, size %d, %d, %d\n", sz1, sz2, size); */

	if (sz1 > size)
		return (0);
	if (sz2 > size)
		return (0);
	/**
	 * 1. While end n1 approaches start n1,
	 * Or end n2 approaches start n2,
	 * 1a. Carry is 0 to start
	 * 2. Add end nums and carry. (Convert from char to num)
	 * 3. If sum > 9 (i.e. 2 digits)
	 * 4. Save right digit in result
	 * 4. carry the 1; otw reset carry to 0.
	 * 5. Move end left toward start.
	 * 6. Redo from step 2.
	 */

	while (n11 >= n1 || n22 >= n2)
	{
		if (size < 0)
			return (0);
		sum = *(n11 + sz1) + *(n22 + sz2) + carry;
		if (sum > 9)
			carry = 1;
		else
			carry = 0;
		*(rr + size) = sum % 10;
		sz1--;
		sz2--;
		size--;
	}
	return (r);
}

/**
 * size_of - get size of array
 *
 * @n1: pointer to array
 *
 * Return: size of array
 */
int size_of(char *n1)
{
	char *n01 = n1;
	int c = 0;
	/* printf("n01 is %p\n", n01); */
	while (*n01)
	{
		n01++;
		c++;
	}
	return (c);
}
