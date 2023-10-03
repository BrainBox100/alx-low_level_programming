#include <stdio.h>

/**
 * main - main block
 * @argc: The number of command-line arguments
 * @argv: Array of pointers to the command-line arguments
 *
 * Description: This program prints the number of arguments passed into it.
 * Each argument is counted and the total number is printed, followed by a new line.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
