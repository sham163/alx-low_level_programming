#include "main.h"

/**
 * Description: _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: int input parameter
 * @x: square root
 * Return: natural square root of a number.
 */

int sq(int n, int x);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * Description: sq - find square root
 * @n: int to find square root
 * @x: square root
 * Return: the square root
 */

int sq(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sq(n, x + 1));
	else
		return (-1);
}
