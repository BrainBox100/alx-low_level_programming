#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list pointer variable.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nnodes;

	nnodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
