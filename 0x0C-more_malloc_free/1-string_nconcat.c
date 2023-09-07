#include "main.h"
#include <stdlib.h>

/**
 * Description: string_nconcat - a function that concatenates two strings.
 * @s1: char input parameter
 * @s2: char input parameter
 * @n: number of bytes of s2
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	ptr = malloc((l1 + l2) * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
			ptr[i] = s1[i];

		if (n >= l2)
		{
			for (i = l1, j = 0; (i < (l1 + l2)) && j < l2; i++, j++)
				ptr[i] = s2[j];
		}
		else
		{
			for (i = l1, j = 0; (i < (l1 + n)) && j < n; i++, j++)
				ptr[i] = s2[j];
		}
		return (ptr);
	}
}



