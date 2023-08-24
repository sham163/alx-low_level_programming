#include "main.h"

/**
 * Description: _strcmp - a function that compares two strings.
 *
 * @s1: char input parameter.
 * @s2: char input parameter.
 *
 * Return: 0 if s1 and s2 are the same;
 * less than 0 if s1<s2; greater than 0 if s1>s2.
 */

int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
if (s1[i] < s2[i])
return (s1[i] - s2[i]);
else if (s1[i] > s2[i])
return (s1[i] - s2[i]);
else
return (s1[i] - s2[i]);
}
