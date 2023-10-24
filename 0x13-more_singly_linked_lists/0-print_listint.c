#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *starter = h;
	size_t counter = 0;

	while (starter != NULL)
	{
		printf("%d\n", starter->n);
		counter ++;
		starter = starter->next;
	}
	return (counter);
}
