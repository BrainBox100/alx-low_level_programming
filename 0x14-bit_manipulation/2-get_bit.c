#include"main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 * @n: number to check bits
 * @index: index at to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, test;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	test = n & divisor;
	if (test == divisor)
		return (1);
	return (0);
}
