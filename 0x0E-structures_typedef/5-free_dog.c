#include "dog.h"

/**
* Description: free_dog - free_dog function
* @d: d
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
