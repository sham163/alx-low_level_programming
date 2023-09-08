#include "main.h"
#include <stdlib.h>

/**
 * Description: _realloc - a function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: null if failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int s;
	void *po;

	if (old_size == new_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		po = malloc(new_size);

		if (po == NULL)
		{
			return (NULL);
		}

		return (po);
	}
}


