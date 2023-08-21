#include "main.h"

/**
 * Description: print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: as string which will be reversed.
 */

void print_rev(char *s)
{
int i = 0;

while (s[i])
{
i++;
}

while (i--)
{
putchar(s[i]);
}

putchar('\n');
}
