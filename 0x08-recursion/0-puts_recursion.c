#include "main.h"

/**
 * Description: _puts_recursion - a function that
 * prints a string, followed by a new line.
 * @s: string input parameter
 */

void _puts_recursion(char *s)
{
int i = 0;

for (i = 0; s[i] != '\0';)
{
puts(s);

if (s[i] = '\0')
{
i++;
_puts_recursion(s);
}
}
}

