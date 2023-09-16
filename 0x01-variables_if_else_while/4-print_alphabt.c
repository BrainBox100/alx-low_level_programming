#include <stdio.h>

/**
 * main - main block
 * Description:program prints alphabets
 * excluding q and e followed by a new line
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}



