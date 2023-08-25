#include "main.h"

/**
 * Description: reverse_array - a function that reverses
 * the content of an array of integers.
 *
 * @a: int input parameter
 * @n: int input parameter
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
