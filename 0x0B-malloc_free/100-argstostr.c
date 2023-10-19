#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function which concatenates all the arguments
 * of a program
 * @ac: argument count
 * @av: arguments to be concatenated
 * Return: to be determined
 */

char *argstostr(int ac, char **av)
{
	int vh = 0, i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			vh++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((sizeof(char) * vh) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
