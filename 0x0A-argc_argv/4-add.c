#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * This program adds up all the positive numbers passed to it as
 * command-line
 * arguments. If no arguments are passed, it prints 0.
 * If any of the arguments
 * contain non-digit characters, it prints "Error" and returns 1.
 *
 * Return: 0 if successful, 1 if an error occurs.
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
