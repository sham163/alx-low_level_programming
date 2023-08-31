#include "main.h"

/**
 * Description: is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: input number
 * @j: int
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int check(int n, int j);
int is_prime_number(int n)
{
return (check(n, 2));
}

/**
 * Description: check - check all number < n
 * @n: int
 * @j: int
 * Return: int
 */

int check(int n, int j)
{
if (n % j == 0 || n <= 1)
return (0);
else if (j >= n && n > 1)
return (1);
else
return (check(n, j + 1));
}
