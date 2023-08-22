#include "main.h"

/**
 * Description: puts_half - a function that prints half
 * of a string, followed by a new line.
 *
 * @str: string parameter input
 */

void puts_half(char *str)
{
int l,i;

for (l = 0; str[l] != '\0'; l++)
;
if (l % 2 == 0)
{
for (i = l / 2; i <= l - 1; i++)
putchar(str[i]);
 
}
else
{
for (i = ((l - 1) / 2) + 1; i <= l - 1; i++)
putchar(str[i]);

}

putchar('\n');    
}
