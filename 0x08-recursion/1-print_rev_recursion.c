#include "main.h"

/**
 * Description: _print_rev_recursion - a function
 * that prints a string in reverse.
 *
 * @s: string input parameter
 */

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
