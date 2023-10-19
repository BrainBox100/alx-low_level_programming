#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - function that copies data form old
 * memory block to new memory block
 *
 * @dest: destination of data being copied
 *
 * @src: data to be copied
 *
 * @n: the amount of bytes to be copied
 *
 * Return: to be determined
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	char *i;
	const char *j;
	size_t k;

	i = (char *)dest;
	j = (const char *)src;

	for (k = 0; k < n; k++)
		i[k] = j[k];
	return (dest);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 *
 * @ptr: pointer to the memory previoulsy allocated
 *
 * @old_size: size of the allocated space of ptr
 *
 * @new_size: new size of the memory block
 *
 * Return: to be determined
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	_memcpy(newptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (newptr);
}
