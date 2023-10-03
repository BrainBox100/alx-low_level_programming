#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		mul = n * m;

		printf("%d\n", mul);
		return (0);
}
