#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Print statements based on last digits of the random number
 * Return: 0
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        p = n % 10;

	if (p > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, p);
	else if (p == 0)
		printf("Last digit of %i is %i and is 0\n", n, p);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, p);
	return (0);
}
