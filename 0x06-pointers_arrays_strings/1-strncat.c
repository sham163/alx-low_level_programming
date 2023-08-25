#include "main.h"

/**
 * Description: _strncat - a function that concatenates two strings.
 *
 * @dest: char input parameter.
 * @src: char input parameter.
 * @n: int input parameter.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
