#include "variadic_functions.h"


/**
* Description: print_strings - a function that prints strings,
* followed by a new line.
* @separator: separator
* @n: number
* @...: args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int s;
va_list ptr;


va_start(ptr, n);

s = 0;
while (s < n)
{
printf("%s", va_arg(ptr, char *));
if (separator != NULL)
{
printf("%c", *separator);
}
s++;

}

va_end(ptr);

printf("\n");

}
