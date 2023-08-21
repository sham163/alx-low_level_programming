#include "main.h"

/**
 * Description: swap_int - function that swaps the values of two integers.
 *
 * @a: integers numbers that will swapped.
 * @b: integers numbers that will swapped.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = a;
	a = b;
	b = swap;
}
