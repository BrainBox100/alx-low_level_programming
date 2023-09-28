#include "main.h"

/**
 * _sqrt_recursion - Calculate the square root recursively.
 * @n: Number to calculate the square root of.
 *
 * Return: The square root of 'n', or -1 if none.
 */

int _sqrt_recursion(int n)
	int _sqrt_recursion(int n)
{
	int _sqrt_extension(int number, int root);

	int root = 1;

	return (_sqrt_extension(n, root));
}

/**
 * _sqrt_recursion - Calculate the square root recursively.
 * @number: Number to calculate the square root of.
 *
 * Return: The square root of 'n', or -1 if none.
 */

int _sqrt_extension(int number, int root)
{
        if ((root * root) > number)
        {
                return (-1);
        }
        else if ((root * root) == number)
        {
                return (root);
        }
        else
        {
                return (_sqrt_extension(number, root + 1));
        }
}
