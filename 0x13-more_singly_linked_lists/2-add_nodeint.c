#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node != NULL)
	{
		fresh_node->n = n;
		fresh_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		fresh_node->next = *head;
	*head = fresh_node;
	return (fresh_node);
}
