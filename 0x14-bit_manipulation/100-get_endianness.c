#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
