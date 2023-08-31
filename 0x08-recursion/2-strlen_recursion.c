#include "main.h"

/**
 * Description: _strlen_recursion - a function
 * that returns the length of a string.
 *
 * @s: string input parameter
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s > 0)

len = len + _strlen_recursion(s + 1) + 1;

return (len);
}
