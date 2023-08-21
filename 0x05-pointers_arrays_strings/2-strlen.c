#include "main.h"
#include <string.h>

/**
 * Description: a function that returns the length of a string.
 *
 * @s: string parameter
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);

	return (len);
}
