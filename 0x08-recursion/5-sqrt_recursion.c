#include "main.h"

/**
 * _sqrt - function that returns natural square root of numbers
 * @n - input number
 *
 * Return: 0.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else 
		return (support_function(n, 0));
}
int support_function(int number, int root)
{
	if ((root * root) > number)
		return (-1);
	else if ((root * root) == number)
		return (root);
	else 
		return (support_function(number, root + 1));
}

