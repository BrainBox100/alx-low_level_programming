#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: Array of pointers to the command-line arguments
 *
 * Description: This program prints all arguments it receives,
 * including the first one.
 * Each argument is printed on a new line.
 *
 * Return: 0 if successful, non-zero otherwise
 */

int main(int argc, char *argv[])
{
	int all_arg;

	for (all_arg = 0; all_arg < argc; all_arg++)
	{
		printf("%s\n", argv[all_arg]);
	}
	return (0);
}
