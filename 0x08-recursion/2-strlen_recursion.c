#include "main.h"

/**
 * _strlen_recursion - prints  string length to stdout using recursion.
 * @s: A pointer to the character array string.
 *
 * Description: This function recursively prints  each character of
 * the string pointed to by 's' until it reaches the null terminator.
 *
 * Return: None.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
