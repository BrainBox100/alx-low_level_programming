#include "main.h"

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n % 10 != 0 && n > 1)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(0));
	}
}

