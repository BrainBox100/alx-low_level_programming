#include "main.h"

/**
 * flip_bits - function counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counter = 0;
	unsigned long int currentBit;
	unsigned long int bitwiseDiff = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		currentBit = bitwiseDiff >> k;
		if (currentBit & 1)
			counter++;
	}

	return (counter);
}
