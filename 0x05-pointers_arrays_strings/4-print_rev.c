#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: pointer
 *
 * Return:string in reverse.
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\0');
}
