#include "main.h"
#include <string.h>

/**
 * Description: a function that returns the length of a string.
 *
 * @s: string parameter
 */

int _strlen(char *s)
{
       int i = 0;
       int length = 0;
       
       char sham = *s;
       
       while (s[i] != '\0'){
           length += 1;
           i++;
       }
       return (length);
}
