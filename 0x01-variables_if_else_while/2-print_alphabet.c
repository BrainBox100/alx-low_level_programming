#include <stdio.h>

/**
 * main - main block
 * Description: program prints alphabet in lower case
 * followed by a new line
 * Return: 0
 */

int main(void)
{	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

