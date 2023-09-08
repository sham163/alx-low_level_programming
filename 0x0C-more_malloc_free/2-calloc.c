#include "main.h"
#include <stdlib.h>

/**
 * Description: _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: parameter
 * @size: parameter
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (unsigned int *) malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ptr[i] = 0;
	return (ptr);
}


