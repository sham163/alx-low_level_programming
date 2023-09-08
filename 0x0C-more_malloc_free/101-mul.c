#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: print_int - print an int
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, r;

	for (i = 0; n / d > 9; i++, d *= 10)
		;

	for (; d >= 1; n %= d, d /= 10)
	{
		r = n / d;
		putchar('0' + r);
	}
}



/**
 * Description: main -  multiplies two positive numbers.
 * @argc: count
 * @argv: value
 * Return: 0
 */


int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	print_int(atoi(argv[1]) * atoi(argv[2]));
	putchar('\n');

	return (0);
}


