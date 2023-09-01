#include "main.h"

/**
 * Description: _strcat - a function that concatenates two strings.
 *
 * @dest: char input parameter.
 * @src: char input parameter.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
int i, ls, ld;

for (ld = 0; dest[ld] != '\0'; ld++)
;

for (ls = 0; src[ls] != '\0'; ls++)
;

for (i = 0; i <= ls; i++)
{
dest[ld] = src[i];
ld++;
}

return (dest);
}
