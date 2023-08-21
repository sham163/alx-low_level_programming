#include "main.h"

/**
 * Description: puts2 - a function that prints every other character
 * of a string, starting with the first character,
 *  followed by a new line.
 *
 *  @str: string parameter input
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
