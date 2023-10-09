#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer
 *
 * Return string.
 */

void _puts(char *str)
{
	int j;

	j = 0;
	while (*str != '\0')
	{
		j++;
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
