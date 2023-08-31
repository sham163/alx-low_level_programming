#include "main.h"

/**
 * Description: is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: input number
 * @j: int
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int check_prime(int n, int j);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * Description: check_prime - check all number < n
 * @n: int
 * @j: int
 * Return: int
 */

int check_prime(int n, int j)
{
if (j >= n && n > 1)
return (1);
else if (n % j == 0 || n <= 1)
return (0);
else
return (check_prime(n, j + 1));
}
