#include <stdio.h>

/**
 * main - main block
 * Description:program prints base 10 digits
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%i", i);
		i++;
	}
	printf("\n");
	return (0);
}
