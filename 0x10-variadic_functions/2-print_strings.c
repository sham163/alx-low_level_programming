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
va_list args;
va_start(args, n);
unsigned int i;

for (i = 0; i < n; i++) {
char *str = va_arg(args, char *);
if (str != NULL) {
printf("%s", str);
} else {
printf("(nil)");
}

if (separator != NULL && i < n - 1) {
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}
