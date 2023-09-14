#include "function_pointers.h"

/**
 * Description: print_name -  a function that prints a name.
 * @name: name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
