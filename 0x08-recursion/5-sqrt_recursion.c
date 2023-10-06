#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (support_function(n, 0));
}
/**
 * support_function - helper function to solve _sqrt_recursion
 * @root: number to determine if square root
 * @number:  int number
 * Return: square root if natural square root, or -1 if none found
 */
int support_function(int number, int root)
{
	if ((root * root) > number)
		return (-1);
	else if ((root * root) == number)
		return (root);
	else
		return (support_function(number, root + 1));
}

