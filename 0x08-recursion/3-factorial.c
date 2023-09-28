#include "main.h"

/**
 * factorial - Calculate the factorial of a number using recursion.
 * @n: The number for which to calculate the factorial.
 *
 * Description: This function uses recursion to calculate the factorial of a
 * non-negative integer 'n'.
 *
 * Return: The factorial of 'n'.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
