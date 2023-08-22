#include "main.h"

/**
 * Description: print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: array input.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf(a[i]);
		_putchar(44);
	}
	_putchar('\n');
}
