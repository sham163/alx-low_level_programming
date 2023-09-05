#include "main.h"
#include <stdlib.h>

/**
 * Description: str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *ptr;


	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
			;
		for (l2 = 0; s2[l2] != '\0'; l2++)
			;
		ptr = malloc((l1 + l2) * sizeof(char) + 1);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
			ptr[i] = s1[i];

		for (i = l1; i < (l1 + l2); i++)
		{
			for (j = 0; j < l2; j++)
			ptr[i] = s2[j];
		}
		return (ptr);
	}
}

