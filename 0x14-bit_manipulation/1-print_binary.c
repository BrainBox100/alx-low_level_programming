#include "main.h"

/**
 * _pow - function calculates (base ^ power)
 * @base: exponent base
 * @power: exponent power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int fig;
	unsigned int k;

	fig = 1;
	for (k = 1; k <= power; k++)
		fig *= base;
	return (fig);
}

/**
 * print_binary - function prints a number in binary
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, test;
	char track;

	track = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		test = n & divisor;
		if (test == divisor)
		{
			track = 1;
			_putchar('1');
		}
		else if (track == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
