#include "main.h"
#include "stdlib.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated space in memory,
 * which contains the contents of s1, followed by the contents
 * of s2, and null terminated. If any string is NULL, it is treated
 * as an empty string. Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1;
	int len2;
	int i, j, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	total_len = len1 + len2 + 1;
	s = (char *)malloc(total_len * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
