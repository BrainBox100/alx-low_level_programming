#include "main.h"

/**
 * _pow_recursion - Calculate the power of a number recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Description: This function calculates 'x' raised to the power of 'y' using
 * recursion. If 'y' is lower than 0, the function returns -1.
 *
 * Return: The result of 'x' raised to the power of 'y', or -1
 * if 'y' is negative.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
