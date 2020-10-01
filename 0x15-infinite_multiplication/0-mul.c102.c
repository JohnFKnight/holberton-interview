#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

void printnum(unsigned long n);


/**
 * mul  - multiply two numbers. Print the result
 * From Task 12/102, Ininite Add, in 217, 0x06.C: More pointers, arrays, strings
 *
 * @n1: first number
 * @n2: second number
 *
 * Return: nothing
 */

/* char *mul(char *n1, char *n2, char *r, int size_r) */
void mul(unsigned long n1, unsigned long n2)
{
	unsigned long res;
	res = n1 * n2;
	printf("%lu\n", res);
	printnum(res);
	_putchar('\n');

}

/**
 * printnum - print a number with putchar, i.e. digit by digit
 *
 * @num: number to print
 *
 * Return: nothing
 */
void printnum(unsigned long num)
{
	if (num / 10)
		printnum(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * main - driver program
 *
 * argc = ARGument Counter: number of args
 * argv - ARGument vector (array of args)
 *
 * Return - nothing
 */
int main(int argc, char **argv)
{
	char *err = "Error";
	if (argc < 3)
	{
		while (*err)
		{
			_putchar(*err);
			err++;
		}
		_putchar('\n');
		exit (1);
	}
	mul((unsigned long)argv[1], (unsigned long)argv[2]);
	return (0);
}
