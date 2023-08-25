#include "main.h"

/**
 * Description: _strncpy -  a function that copies a string.
 *
 * @dest: char input parameter
 * @src: char input parameter
 * @n: int input parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
