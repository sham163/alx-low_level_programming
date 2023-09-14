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

	s = 0;
	while (s < n && n != 0)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL)
		{
			printf("%c", *separator);
		}
		s++;
	}

	va_end(ptr);

	printf("\n");
}
