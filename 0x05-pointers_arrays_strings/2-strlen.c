#include "main.h"

/**
 * _strlen - checks for length of a string
 * @s: pointer
 * Return: string length.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
