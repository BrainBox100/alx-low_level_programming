#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node;
	listint_t *starter = *head;

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node != NULL)
	{
		fresh_node->n = n;
		fresh_node->next = NULL;
	}
	else
		return (NULL);
	if (starter != NULL)
	{
		while (starter->next != NULL)
			starter = starter->next;
		starter->next = fresh_node;
	}
	else
		*head = fresh_node;
	return (fresh_node);
}
