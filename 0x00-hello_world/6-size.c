#include <stdio.h>

/**
 * main - prints size if various types
 * Return:0 if successful , otherwise non zero
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
			printf("size of an int: %d byte(s)\n", sizeof(int));
			printf("size of a long int: %d byte(s)\n", sizeof(long int));
			printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
			printf("size of a float: %d byte(s)\n", sizeof(float));
			return (0);

}
