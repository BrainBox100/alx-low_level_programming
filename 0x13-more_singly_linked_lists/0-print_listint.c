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

	while (starterr != NULL)
	{
		printf("%d\n", starterr->n);
		counter ++;
		starter = starterr->next;
	}
	return (counter);
}
