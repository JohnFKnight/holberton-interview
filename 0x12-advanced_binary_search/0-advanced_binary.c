#include "search_algos.h"
#include <assert.h>

/**
 * binary_search - search for value in array of ints use Linear search algorthm
 *
 * @array: pointer to the first element array to traverse
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t m, x;
	signed int found;

	if (size == 0)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (x = 0; x < size - 1; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	if (size % 2 == 0)
		m = (size - 1) / 2;
	else
		m = size / 2;
	if (array[m] == value)
	{
		found = m;
	}
	else if (array[m] < value)
	{
		/* Upper half. So search in upper half of the current array */
		/* with new length of the upper half. */
		found = advanced_binary(array + m + 1, size - m - 1, value);

		if (found != (-1))
		{
			/* Since we've found a key, need to offset it to make */
			/* valid in the current search scope */
			found += m + 1;
		}
	}
	else
	{
		/* Lower half, there is no need to offset the array.  */
		/* New array length is equal to the current middle point. */
		found = advanced_binary(array, m, value);
	}
	return (found);
}
