#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        /* int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}; */
        /* int array[] = {19}; */
        int array[] = {48, 19};
        /* int array[] = {19, 48, 2134567890, 99, 71, 13, 52, 96, 73, 86, 7}; */
        /* int array[] = {19, 48, 2134567890, 99, 71, 13, 52, 392796012, 96, 73, 86, 7}; */
        /* int array[] = {19, 48, 21, 34, 56, 78,90, 99, 71, 13, 52, 39, 27, 96, 12, 96, 73, 86, 7}; */
        /* int array[] = {19, 48, 2134567890, 99, 71, 13, 52, 392796012, 96, 73, 86, 7}; */
        /* int array[] = {19, 48, 2134567890, 99, 71, 13, 52, 392796012, 96, 73, 86, 7}; */
        /* int array[] = {19, 48, 2134567890, 99, 71, 13, 52, 392796012, 96, 73, 86, 7}; */
        /* int array[] = {1999, 48}; */

	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	radix_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
