#include "main.h"

/**
 * Description: _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: int input parameter
 * @val: square root
 * Return: natural square root of a number.
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * Description: square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: the square root
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
