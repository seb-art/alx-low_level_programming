#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: integer to check if is prime
 * Return: 1 if the integer is prime and 0 if the integer is not prime
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	else if (n % 2 == 0 && n % 3 == 0)
	{
		return (0);
	}
	else if (n % 2 == 0 && n % 3 != 0)
	{
		return (0);
	}
	else if (n % 2 != 0 && n % 3 == 0)
	{
		return (0);
	}
	else if (n % 2 != 0 && n % 3 != 0)
	{
		return (1);
	}
	return (is_prime_number(n + 1));
}
