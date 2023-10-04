#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and
 * initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The char to initialize the array with.
 * Return: If size = 0, returns NULL. Otherwise, returns
 * a pointer to the array,
 * or NULL if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *pArray;
	unsigned int count;

	if (size == 0)
		return (NULL);

	pArray = malloc(size * sizeof(char));
	if (pArray == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
	{
		pArray[count] = c;
	}
	return (pArray);
}
