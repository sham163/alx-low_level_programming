#include "variadic_functions.h"

/**
* Description: print_all - a function that prints anything.
* @format: format
*/

void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
int s = 0;

va_start(args, format);

while (format && format[s])
{
switch (format[s])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}
break;
default:
s++;
continue;
}
separator = ", ";
s++;
}
printf("\n");
va_end(args);
}
