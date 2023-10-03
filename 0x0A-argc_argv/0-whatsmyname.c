#include "main.h"

/**
 * main - prints the name of the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    int a;
    for (a = 0; argv[0][a] != '\0';)
    {
    	_putchar(argv[0][a]);
    }
    _putchar('\n');
    return (0);
}
