#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate Character in String
 * @s: Input string.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found.
 *
 * Description:
 * This function searches for the first occurrence of the character `c` in the
 * string `s` and returns a pointer to it. If `c` is not found in `s`, it returns NULL.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return NULL;
}
