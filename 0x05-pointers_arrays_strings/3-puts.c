#include "main.h"

/**
 * Description: _puts - a function that prints a string
 * , followed by a new line
 *
 * @str: is a string
 */

void _puts(char *str)
{
	for (int i = 0; i <= _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
