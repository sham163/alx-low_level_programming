#include "main.h"
#include <stdlib.h>

/**
 * Description: _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: char input parameter
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int l, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (l = 0; s[l] != '\0'; l++)
			;

		ptr = malloc(l * sizeof(char));
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
			ptr[i] = str[i];
		return (ptr);
	}
}
