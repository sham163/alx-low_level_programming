#include "variadic_functions.h"

/**
* Description: print_all - a function that prints anything.
* @format: format
*/

void print_all(const char * const format, ...)
{
va_list ar;
char *separator = "";
int s = 0;

va_start(ar, format);

while (format && format[s])
{
switch (format[s])
{
case 'c':
printf("%s%c", separator, va_arg(ar, int));
break;
case 'i':
printf("%s%d", separator, va_arg(ar, int));
break;
case 'f':
printf("%s%f", separator, va_arg(ar, double));
break;
case 's':
{
char *str = va_arg(ar, char *);
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
va_end(ar);
}
