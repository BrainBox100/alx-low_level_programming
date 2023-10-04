#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Description: This function duplicates a string by allocating a new block
 * of memory, copying the original string into this new block, and returning
 * a pointer to it. If the input string is NULL, the function returns NULL.
 * If memory allocation fails, the function also returns NULL.
 *
 * Return: On success, a pointer to the duplicated string. On failure or if
 * str is NULL, returns NULL.
 */

char *_strdup(char *str)
{
	char *s;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[c] = '\0';

	return (s);
}
