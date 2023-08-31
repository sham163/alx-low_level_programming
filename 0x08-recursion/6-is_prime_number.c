#include "main.h"

/**
 * Description: is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: input number
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
if (n <= 1) {
return (0);  // Numbers less than or equal to 1 are not prime
}
for (int i = 2; i * i <= n; ++i) {
if (n % i == 0) {
return (0);  // If divisible by any number, not prime
}
}

return (1);
}
