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
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (char *) malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}


        for (i = 0; i < nmemb; i++)
                ptr[i] = 0;
        return (ptr);
}


