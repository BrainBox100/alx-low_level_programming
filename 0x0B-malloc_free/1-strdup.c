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
	char *pStr;
	int _strlen;
	int count;

	for (_strlen = 0; _strlen != '\0'; _strlen++)
	pStr = malloc((_strlen * sizeof(char)) + 1);
	if (pStr == NULL)
		return (NULL);
	for (count = 0; count < _strlen; count++)
	{
		pStr[count] = str[count];
	}
	pStr = '\0';
	return (pStr);
}
