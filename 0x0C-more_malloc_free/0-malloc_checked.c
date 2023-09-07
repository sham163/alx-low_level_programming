#include "main.h"
#include <stdlib.h>

/**
 * Description: malloc_checked - a function that allocates memory using malloc.
 * @b: size
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
