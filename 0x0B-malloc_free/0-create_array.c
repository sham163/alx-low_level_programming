#include "main.h"
#include <stdlib.h>

/**
 * Description: create_array - a function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: char input parameter
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
		ptr = malloc(size * sizeof(char));


	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
}



