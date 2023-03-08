#include "main.h"


/**
 * check - checks to see if int is prime
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
if (b < 2 || b % a == 0)
{
return (0);
}
else if (a > b / 2)
{
return (1);
}
else
{
return (check(a + 1, b));
}
}

/**
 * is_prime_number - checkin for prime numbers
 * @n: integer to be checked
 *
 * Return: 0
 *         1
 */

int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
return (check(2, n));
}
