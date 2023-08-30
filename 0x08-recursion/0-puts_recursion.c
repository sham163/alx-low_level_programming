#include "main.h"

/**
 * Description: _puts_recursion - a function that
 * prints a string, followed by a new line.
 * @s: string input parameter
 */

void _puts_recursion(char *s)
{

if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
