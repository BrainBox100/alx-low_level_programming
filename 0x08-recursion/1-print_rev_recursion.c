#include "main.h"

/**
 * _print_rev_recursion - Reverse a string to stdout using recursion.
 * @s: A pointer to the character array string.
 *
 * Description: This function recursively prints in reverse each character of
 * the string pointed to by 's' until it reaches the null terminator.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
