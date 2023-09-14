#include "function_pointers.h"

/**
 * Description: array_iterator - a function that executes a
 * function given as a parameter on each element of an array.
 * @array: array
 * @size: size
 * @action: action
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *f;

	f = array + size - 1;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (f >= array)
		{
			action(*array);
			array++;
		}
	}
}

