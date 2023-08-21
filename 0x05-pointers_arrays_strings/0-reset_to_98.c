#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 *
 * Description: function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 * @n: address of n
 */

void reset_to_98(int *n)
{
	int *p;

	p = n;

	*p = 98;
}

