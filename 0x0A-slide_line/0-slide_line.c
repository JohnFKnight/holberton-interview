#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/* #include "slide_line.h" */

/**
 * shift_left - Search for zeros & shift left first num to current idx
 *
 * @arr: Pointer to the array of integers
 * @size: Number of elements in @arr
 * @idx: Current index of the @arr
 *
 * Return: nothing
 */
void shift_left(int *arr, int idx, int size)
{
	int i = idx;

	while (arr[idx] == 0)
		idx++;
	if (idx > size)  /* All/remaining zeros? */
		idx = size - 1;
	arr[i] = arr[idx];
	arr[idx] = 0;
}

/**
 * shift_right - Search for zeros & shift right first num to current idx
 *
 * @arr: Pointer to the array of integers
 * @size: Number of elements in @arr
 * @idx: Current index of the @arr
 *
 * Return: nothing
 */
void shift_right(int *arr, int idx, int size)
{
	int i = idx;

	while (arr[idx] == 0)
		idx--;
	if (idx < 0)  /* All/remaining zeros? */
		idx = size;
	arr[i] = arr[idx];
	arr[idx] = 0;
}

/**
 * slide_left - Shift left array of ints. add duplicate values. ignore zeros
 *
 * @line: Pointer to the array of integers
 * @size: Number of elements in @arr
 *
 * Return: 0 or 1
 */
int slide_left(int *line, int size)
{
	int len = size, i = 0, currIdx = 0;

	for (i = 0; i < len; i++)
	{
		currIdx = i;
		if (line[currIdx] == 0)
			shift_left(line, i, len);

		i = currIdx + 1;
		if (i == len)  /* All/remaining zeros? */
			return (1);

		/* i = currIdx + 1; */
		if (line[i] == 0)
		{
			printf("HELLOOOO\n");
			shift_left(line, i, len);
		}
		if (line[currIdx] == line[currIdx + 1])
		{
			line[currIdx] = 2 * line[currIdx];
			line[currIdx + 1] = 0;
		}
		i = currIdx;
	}

	/* if (currIdx < len - 2) */
	/* { */
	/* 	for (i = currIdx;; i++) */
	/* 		line[i] = 0; */
	/* } */
	return (1);
}


/**
 * slide_right - Shift right array of ints. add duplicate values. ignore zeros
 *
 * @line: Pointer to the array of integers
 * @size: Number of elements in @arr
 *
 * Return: 0 or 1
 */
int slide_right(int *line, int size)
{
	int len = size, i = 0, currIdx = 0;

	for (i = len - 1; i >= 0; i--)
	{
		currIdx = i;
		if (line[currIdx] == 0)
			shift_right(line, i, len);

		if (i < 0)  /* All/remaining zeros? */
			return (0);

		i = currIdx - 1;
		if (line[i] == 0)
			shift_right(line, i, len);
		if (line[currIdx] == line[currIdx - 1])
		{
			line[currIdx] = 2 * line[currIdx];
			line[currIdx - 1] = 0;
		}
		i = currIdx;
	}

	/* if (currIdx > 0) */
	/* { */
	/* 	for (i = currIdx;; i--) */
	/* 		line[i] = 0; */
	/* } */
	return (1);
}

/**
 * slide_line - Shift array  of ints. add duplicate values. ignore zeros
 *
 * @line: Pointer to the array of integer to be printed
 * @size: Number of elements in @line
 * @direction: Which direction to slide: L or R.
 *
 * Return: 0 or 1
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == 0)
		return (slide_left(line, size));
	else
		return (slide_right(line, size));
}
