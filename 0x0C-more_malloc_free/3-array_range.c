#include "main.h"
#include <stdlib.h>

/**
 * Description: array_range - a function that creates an array of integers.
 * @min: int parameter
 * @max: int parameter
 * Return: array of integer
 */

int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);

	l = 1 + max - min;

	p = malloc(l * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = min++;
	return (p);
}
