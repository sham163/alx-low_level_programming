#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * Description: _calloc - a function that allocates
 * memory for an array, using malloc.
 * @nmemb: parameter
 * @size: parameter
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr,0,sizeof(int) * nmemb);

	return (ptr);
}


