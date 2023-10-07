#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * This function allocates memory and returns a pointer to
 * the allocated memory.
 * If malloc fails, the function will cause normal process
 * termination with a status value of 98.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	/* if malloc fails, terminate the process */
	if (p == NULL)
		exit(98);
	return (p);
}
