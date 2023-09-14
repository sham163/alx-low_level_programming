#include "function_pointers.h"

/**
 * Description: int_index - a function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if (size != 0 && array != NULL && cmp != NULL)
	{
		while (size > s)
		{
			if (cmp(array[s]) != NULL)
			{
				return (s);
			}
			s++;
		}
	}
	return (-1);
}

