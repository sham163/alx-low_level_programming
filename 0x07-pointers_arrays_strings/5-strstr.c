#include "main.h"

/**
 * Description: _strstr -  a function that locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
char *k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
k = &haystack[i];
return (k);
}
else


if (haystack[i] != needle[j])
break;
}


}
return (0);
}
