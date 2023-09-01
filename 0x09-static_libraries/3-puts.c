#include "main.h"

/**
 * Description: _puts - a function that prints a string
 * , followed by a new line
 *
 * @str: is a string
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
