#include "main.h"

/**
 * Description: _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @src: char input parameter.
 * @dest: char input parameter.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
