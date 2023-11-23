#include "main.h"

/**
 * Description: print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, pr = 0;

	while(b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	}
	if (!pr)
		_putchar('0');
}
