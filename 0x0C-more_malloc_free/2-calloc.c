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
	char * ptr1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}


        for (i = 0; i < nmemb * size; i++)
	{
		ptr1 = (char *)ptr;
                ptr1[i] = 0;
	}
        return (ptr);
}


