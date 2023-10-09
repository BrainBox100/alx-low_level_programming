#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer
 *
 * Return: Reversed string.
 */

void rev_string(char *s)
{
	char *end = s;
	char *start = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		end--;
		start++;
	}
}
