#include "variadic_functions.h"

/**
 * Description: print_numbers -  a function that prints numbers,
 * followed by a new line.
 * @separator: separator between numbers
 * @n: count of args
 * @...: args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list ptr;


	va_start(ptr, n);


	for ( s = 0; s < n; s++)
	{
		printf("%d%s", va_arg(ptr, int),
		s ? (separator ? separator : "") : "\n");
	}

	va_end(ptr);

}
