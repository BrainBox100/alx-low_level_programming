#include "main.h"

/**
 * _sqrt_recursion - Calculate the square root recursively.
 * @n: Number to calculate the square root of.
 *
 * Return: The square root of 'n', or -1 if none.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_extension(n, 0));
	}

}
	

