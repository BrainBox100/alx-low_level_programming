#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout using recursion.
 * @s: A pointer to the character array string.
 * Description: This function recursively prints each character of the string
 * pointed to by 's' until it reaches the null terminator.
 *
 * Return: None.
 */

void _puts_recursion(char *s)
{
    if (*s == '\0') 
    {
        return;
    }
    else
    {
    _putchar(*s);
    _puts_recursion(s + 1);
    }
    _putchar('\n');
}
