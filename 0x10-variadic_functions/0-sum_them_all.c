#include "variadic_functions.h"

/**
 * Description: sum_them_all - a function that returns
 * the sum of all its parameters.
 * @n: number of args
 * @...: args
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	unsigned int s, sum = 0;

	va_start(ptr, n);

	for (s = 0; s < n; s++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
