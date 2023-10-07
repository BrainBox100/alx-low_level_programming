#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to be appended from string 2.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer to the newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;
	len_s2 = 0;

	while (s2[len_s2] != '\0')
		len_s2++;
	if (n > len_s2)
		n = len_s2;
	s = malloc(len_s1 + n + 1);

	if (s == NULL)
		return (NULL);
	i = 0;

	while (s[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;

	while (j < n && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
