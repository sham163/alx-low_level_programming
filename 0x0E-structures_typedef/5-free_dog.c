#include <stdio.h>
#include "dog.h"

/**
 * Description: free_dog - free_dog function
 * @d: d
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
